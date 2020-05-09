#pragma once
class Sensors
{
public:
	Sensors();
	~Sensors();
	bool signalRecived(bool info);
	bool robotConnected(bool C);
	bool wallFront(int S);
	bool wallLeft(int S);
	bool wallRight(int S);
	void setFront();
	void setRight();
	void setLeft();
private:
	bool signal;
	bool connection;
	bool way;
	char hand;
};

Sensors::Sensors()
{
	this->connection = false;
	this->signal = false;
	this->way = true;
	this->hand = 'L';
}

Sensors::~Sensors()
{
}

inline bool Sensors::signalRecived(bool info)
{
	if (info == true) {
		return true;
	}
	return false;
}

inline bool Sensors::robotConnected(bool C)
{	
	if (C == true) {
		this->connection == true;
		return connection;
	}
	return false;
}

inline bool Sensors::wallFront(int S)
{	
	if (S < 1) {
		return true;
	}
	return true;
}

inline bool Sensors::wallLeft(int S)
{
	if (S < 1) {
		return true;
	}
	return true;
}

inline bool Sensors::wallRight(int S)
{	
	if (S < 1) {
		return true;
	}
	return true;
}

