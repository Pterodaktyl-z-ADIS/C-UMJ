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

//od�wie�anie ekranu
	labirynth.printMaze();
	_sleep(50);

//sprawdzania, czy zosta�o odnalezione wj�cie
	if (X == labirynth.getDoor[0] && Y == labirynth.getDoor[1]) {
		return true;
	}

//rekurencyjne poszukiwanie rozwi�zania
// sprawdzanie, czy jestem na mapie i nie stoj� w przeszkodzie 
	if (X != labirynth.getStart[0] && X < 1 || X > 18) {
		return false;
	}
	if (Y != labirynth.getStart[1] && Y < 1 || Y > 18) {
		return false;
	}
	if (labirynth.isObstacle[X][Y]) {
		return false;
	}

// sprawdzanie wolnych p�l wok�
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

//wyb�r �ciany - p�ki co na twardo b�dzie to lewa

//trafienie na �ciane
	if (sensors.wallFront(signal)) {
		if (sensors.wallLeft(signal) && sensors.wallRight(signal)) {
			//funkcja odpowiedzialna za dwa obroty o 90 stopni
			//ruch wzgl�dem lewej d�oni
		}
		else
		{
			//funkcja obrotu w prawo o 90 stopni
			//ruch wzgl�dem prawej d�oni
		}
	}
//ruch

}