#pragma once
class Sensors
{
public:
	Sensors();
	~Sensors();
	bool signalRecived();
	bool robotConnected();
	bool wallFront();
	bool wallLeft();
	bool wallRight();
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

inline bool Sensors::signalRecived()
{
	return false;
}

inline bool Sensors::robotConnected()
{
	return false;
}

inline bool Sensors::wallFront()
{
	return true;
}

inline bool Sensors::wallLeft()
{
	return true;
}

inline bool Sensors::wallRight()
{
	return true;
}

