#pragma once
#include <iostream>
class Labirynth
{
public:
	Labirynth();
	~Labirynth();
	void printMaze();
	void setMouse(int X, int Y);
	char getMouse();
	char getMaze();
	int getDoor();
	int getStart();
	int getDimensions();
	bool isObstacle(int X, int Y);

private:
	static const int dimensions = 20;
	int startingPoint[2] = { 13,0 };
	int endingPoint[2] = { 3, 19 };
	const char wall = '#';
	const char way = ' ';
	const char mouse = '0';
	char Maze[dimensions][dimensions + 1]=
	{
		"############ #######",
		"###             #  #",
		"##### #### ## ## # #",
		"#     ##      #   ##",
		"# # #### ### #### ##",
		"#    ##     ##     #",
		"### ### ###    ### #",
		"##   ##   ## ###   #",
		"#  ###  ##   ### # #",
		"# #  # #####  ##   #",
		"#   #    ##  ### ###",
		"###    ###  #      #",
		"#   # #### ## ## ###",
		"#####  #   ##  #   #",
		"#   ## ### ### ### #",
		"###      # #       #",
		"###### #   # ##  ###",
		"##   # # ### ###   #",
		"#  #   #     #   ###",
		"## #################",
	};
};

Labirynth::Labirynth()
{

}

Labirynth::~Labirynth()
{
}

inline void Labirynth::printMaze()
{
	for (int Y = 0; Y < dimensions; Y++) {
		std::cout << Maze[Y] << std::endl;
	}
}

inline char Labirynth::getMouse()
{
	return mouse;
}

inline char Labirynth::getMaze()
{
	return **Maze;
}

inline void Labirynth::setMouse(int X, int Y)
{
	this->Maze[X][Y] = mouse;
}

inline int Labirynth::getDoor()
{
	return *endingPoint ;
}

inline int Labirynth::getStart()
{
	return *startingPoint;
}

inline int Labirynth::getDimensions()
{
	return dimensions;
}

inline bool Labirynth::isObstacle(int X, int Y)
{
	if (Maze[X][Y] != ' ') {
		return true;
	}
	else return false;
}
