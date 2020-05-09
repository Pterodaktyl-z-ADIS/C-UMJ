#pragma once
#include "Labirynth.h"
#include "Sensors.h"
#include "Position.h"
#include "Move.h"

Labirynth labirynth;
Sensors sensors;
Position position;
int signal;

bool Algorythm(int X, int Y)
{
//ustawienie myszy w konkretnym punkcie
	labirynth.setMouse[X][Y];

//odœwie¿anie ekranu
	labirynth.printMaze();
	_sleep(50);

//sprawdzania, czy zosta³o odnalezione wjœcie
	if (X == labirynth.getDoor[0] && Y == labirynth.getDoor[1]) {
		return true;
	}

//rekurencyjne poszukiwanie rozwi¹zania
// sprawdzanie, czy jestem na mapie i nie stojê w przeszkodzie 
	if (X != labirynth.getStart[0] && X < 1 || X > 18) {
		return false;
	}
	if (Y != labirynth.getStart[1] && Y < 1 || Y > 18) {
		return false;
	}
	if (labirynth.isObstacle[X][Y]) {
		return false;
	}

// sprawdzanie wolnych pól wokó³
	if (position.getOrientation == 'N') {
		if (!labirynth.isObstacle[X][Y + 1]) {
			return true;
		}
	};
	if (position.getOrientation == 'S') {
		if (!labirynth.isObstacle[X][Y - 1]) {
			return true;
		}
	};
	if (position.getOrientation == 'W') {
		if (!labirynth.isObstacle[X + 1][Y]) {
			return true;
		}
	};
	if (position.getOrientation == 'E') {
		if (!labirynth.isObstacle[X - 1][Y]) {
			return true;
		}
	};

//wybór œciany - póki co na twardo bêdzie to lewa

//trafienie na œciane
	if (sensors.wallFront(signal)) {
		if (sensors.wallLeft(signal) && sensors.wallRight(signal)) {
			//funkcja odpowiedzialna za dwa obroty o 90 stopni
			//ruch wzglêdem lewej d³oni
		}
		else
		{
			//funkcja obrotu w prawo o 90 stopni
			//ruch wzglêdem prawej d³oni
		}
	}
//ruch

}