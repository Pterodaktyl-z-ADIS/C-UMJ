#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

typedef enum ROBOT_MOVEMENT {
	STOP = 0,
	ONWARD,
	BACKWARD,
	TURN_RIGHT,
	TURN_LEFT,
}MOVEMENT;

struct MOTOR_COMMAND{
	int angular_z;
	int linear_x;
	int move_command;
}motor_command; 


struct LASER_MESSAGE{
	vector<float> ranges;
	int range_max;
	int range_min;

}laser_msg;

struct SIGNALS
{

}sens_msg;

bool robot_move(const MOVEMENT move) {

	if (move == STOP) {
		motor_command.angular_z = 0.0;
		motor_command.linear_x = 0.0;
	}
	else if (move == ONWARD) {
		motor_command.angular_z = 0.0;
		motor_command.linear_x = 1.0;
	}
	else if (move == BACKWARD) {
		motor_command.angular_z = 0.0;
		motor_command.linear_x = -1.0;
	}
	else if (move == TURN_RIGHT) {
		motor_command.angular_z = 1.0;
		motor_command.linear_x = 0.0;
	}
	else if (move == TURN_LEFT) {
		motor_command.angular_z = -1.0;
		motor_command.linear_x = 0.0;
	}
	else  {
		return false;
	}

	_sleep(10);
	return true;
}

bool wFoll = false;
bool door = false;
bool crash = false;

void sensor_signal(const var& sens_msg) {
	laser_msg = *sens_msg;
	vector<float> laser_ranges;
	laser_ranges = laser_msg.ranges;

	size_t range_size = laser_ranges.size();
	float left_side = 0.0, right_side = 0.0;
	float range_min = laser_msg.range_max;
	float range_max = laser_msg.range_min;
	int count = 0;

	for (size_t i = 0; i < range_size; i++) {
		if (laser_ranges[i] < range_min) {
			range_min = laser_ranges[i];
		}
		if (isnan(laser_ranges[i])) {
			count++;
		}
		if (i < range_size / 4) {
			if (laser_ranges[i] > range_max) {
				range_max = laser_ranges[i];
			}
		}
		if (i > range_size / 2) {
			left_side += laser_ranges[i];
		}
		else {
			right_side += laser_ranges[i];
		}
	}
	if (count > (range_size * 0.5) || laser_ranges[range_size / 2] < 0.20) {
		crash = true;
	}
	else {
		crash = false;
	}
	if (!crash) {
		if (range_min <= 0.5 && !door) {
			wFoll = true;
			crash = false;
			robot_move(STOP);

			if (left_side >= right_side) {
				robot_move(TURN_RIGHT);
			}
			else
			{
				robot_move(TURN_LEFT);
			}
		}
		else {
			robot_move(STOP);
			if (wFoll) {
				if (range_max >= 2.0) {
					door = true;
					wFoll = false;
				}
			}
			if (door) {
				if (laser_ranges[0] <= 0.5) {
					door = false;
				}
			}
			else {
				robot_move(ONWARD);
			}
		}
	}
	else {
		robot_move(BACKWARD);
	}
}

int main(int argc, char** argv) {
	
	return 0;
}