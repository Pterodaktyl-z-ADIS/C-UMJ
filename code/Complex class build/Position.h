#pragma once


class Position
{
public:
	Position();
	~Position();
	void setPosition();
	void setOrientation(char O);
	int getPositionX();
	int getPositionY();
	char getOrientation();
	
private:
	int x_position;
	int y_position;
	char orientation;
};

Position::Position()
{
	this->orientation = 'S';
}

Position::~Position()
{
}

inline void Position::setPosition()
{
	std::cin >> this->x_position;
	std::cin >> this->y_position;
}

int Position::getPositionX()
{
	return x_position;
}

int Position::getPositionY()
{
	return y_position;
}

inline void Position::setOrientation(char O)
{
	this->orientation = 0;
}

inline char Position::getOrientation()
{
	return orientation;
}



