#ifndef CONTROLLER_H
#define CONTROLLER_H
/*
	This file is part of FreeIntv.

	FreeIntv is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	FreeIntv is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with FreeIntv.  If not, see http://www.gnu.org/licenses/
*/

int controllerSwap;

void controllerInit();

int getControllerState(int joypad[], int player);

int getKeypadState(int player, int joypad[], int joypre[]);

void setControllerInput(int player, int state); 

void drawMiniKeypad(int player, int frame[]);

#endif