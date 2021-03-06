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

#include "stic.h"
#include "osd.h"

// Paused Message

int pauseImage[572] = 
{
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
0,1,0,1,1,1,1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,1,1,0,0,1,1,1,1,1,0,1,1,1,1,0,0,1,1,0,1,0,
0,1,0,1,0,0,0,1,0,0,1,0,1,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,1,0,1,0,
0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,1,1,0,1,0,
0,1,0,1,1,1,1,0,0,1,1,1,1,1,0,1,0,0,0,1,0,0,1,1,1,0,0,1,1,1,0,0,0,1,0,0,0,1,0,1,1,0,1,0,
0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,
0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,1,0,1,0,
0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1,1,1,0,0,0,1,1,1,0,0,1,1,1,1,1,0,1,1,1,1,0,0,1,1,0,1,0,
0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

void drawPaused()
{
	int i, j, k;
	int offset = 506;  
	k = 0;
	for(i=0; i<13; i++)
	{
		for(j=0; j<44; j++)
		{
			frame[offset+j] = pauseImage[k]*0xFFFFFF;
			k++;
		}
		offset+=352;
	}
}

// Left / Right input Images

int leftImage[377] = // 29x13
{
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
0,1,0,1,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,
0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,
0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,
0,1,0,1,0,0,0,0,0,1,1,1,1,0,0,1,1,1,0,0,0,0,0,1,0,0,0,1,0,
0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,
0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,
0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,
0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

int rightImage[455] = // 35x13
{
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
0,1,0,1,1,1,1,0,0,1,1,1,1,1,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,1,0,
0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,
0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,
0,1,0,1,1,1,1,0,0,0,0,1,0,0,0,1,0,1,1,1,0,1,1,1,1,1,0,0,0,1,0,0,0,1,0,
0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,
0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,
0,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,1,1,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,
0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

void drawLeftRight()
{
	int i, j, k1, k2;
	int offset = 73920; //210*352
	k1 = 0;
	k2 = 0;
	for(i=0; i<13; i++)
	{
		for(j=0; j<29; j++)
		{
			frame[offset+j] = leftImage[k1]*0xFFFFFF;
			k1++;
		}
		for(j=0; j<35; j++)
		{
			frame[offset+317+j] = rightImage[k2]*0xFFFFFF;
			k2++;
		}
		offset+=352;
	}
}

void drawRightLeft()
{
	int i, j, k1, k2;
	int offset = 73920; //210*352
	k1 = 0;
	k2 = 0;
	for(i=0; i<13; i++)
	{
		for(j=0; j<35; j++)
		{
			frame[offset+j] = rightImage[k1]*0xFFFFFF;
			k1++;
		}
		for(j=0; j<29; j++)
		{
			frame[offset+323+j] = leftImage[k2]*0xFFFFFF;
			k2++;
		}
		offset+=352;
	}
}

int letters[590] = // 32 - 90 59x10
{
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // space
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // !
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // "
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // #
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // $
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // %
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // &
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // '
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // (
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // )
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // *
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // +
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 8,  // ,  
	0, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0, 0,  // -
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0, 0,  // .
	0, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0, 0,  // /
	0, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0, 0,  // 0
	0, 0x18, 0x28, 0x08, 0x08, 0x08, 0x08, 0x3E, 0, 0,  // 1
	0, 0x3C, 0x42, 0x02, 0x04, 0x18, 0x20, 0x7E, 0, 0,  // 2
	0, 0x3C, 0x42, 0x02, 0x1C, 0x02, 0x02, 0x3C, 0, 0,  // 3
	0, 0x40, 0x44, 0x44, 0x7E, 0x04, 0x04, 0x04, 0, 0,  // 4
	0, 0x7E, 0x40, 0x40, 0x7C, 0x02, 0x02, 0x7C, 0, 0,  // 5
	0, 0x3E, 0x40, 0x40, 0x7C, 0x42, 0x42, 0x3C, 0, 0,  // 6
	0, 0x7E, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0, 0,  // 7
	0, 0x3C, 0x42, 0x42, 0x3C, 0x42, 0x42, 0x3C, 0, 0,  // 8
	0, 0x3C, 0x42, 0x42, 0x3E, 0x02, 0x02, 0x3C, 0, 0,  // 9
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // :
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // ;
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // <
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // =
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // >
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // ?
	0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0, 0,  // @
	0, 0x18, 0x24, 0x42, 0x7E, 0x42, 0x42, 0x42, 0, 0,  // A
	0, 0x7C, 0x42, 0x42, 0x7C, 0x42, 0x42, 0x7C, 0, 0,  // B
	0, 0x3C, 0x42, 0x40, 0x40, 0x40, 0x42, 0x3C, 0, 0,  // C
	0, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7C, 0, 0,  // D
	0, 0x7E, 0x40, 0x40, 0x7C, 0x40, 0x40, 0x7E, 0, 0,  // E
	0, 0x7E, 0x40, 0x40, 0x7C, 0x40, 0x40, 0x40, 0, 0,  // F
	0, 0x3C, 0x42, 0x40, 0x4E, 0x42, 0x42, 0x3C, 0, 0,  // G
	0, 0x42, 0x42, 0x42, 0x7E, 0x42, 0x42, 0x42, 0, 0,  // H
	0, 0x7C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7C, 0, 0,  // I
	0, 0x7E, 0x04, 0x04, 0x04, 0x04, 0x44, 0x38, 0, 0,  // J
	0, 0x42, 0x44, 0x48, 0x70, 0x48, 0x44, 0x42, 0, 0,  // K
	0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7E, 0, 0,  // L
	0, 0x42, 0x66, 0x5A, 0x42, 0x42, 0x42, 0x42, 0, 0,  // M
	0, 0x42, 0x62, 0x52, 0x52, 0x4A, 0x46, 0x42, 0, 0,  // N
	0, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0, 0,  // O
	0, 0x7C, 0x42, 0x42, 0x7C, 0x40, 0x40, 0x40, 0, 0,  // P
	0, 0x3C, 0x42, 0x42, 0x42, 0x4A, 0x46, 0x3D, 0, 0,  // Q
	0, 0x7C, 0x42, 0x42, 0x7C, 0x42, 0x42, 0x42, 0, 0,  // R
	0, 0x3C, 0x42, 0x40, 0x3C, 0x02, 0x42, 0x3C, 0, 0,  // S
	0, 0x7C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0, 0,  // T
	0, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0, 0,  // U
	0, 0x42, 0x42, 0x42, 0x42, 0x24, 0x24, 0x18, 0, 0,  // V
	0, 0x42, 0x42, 0x42, 0x42, 0x5A, 0x66, 0x42, 0, 0,  // W
	0, 0x42, 0x42, 0x24, 0x18, 0x24, 0x42, 0x42, 0, 0,  // X
	0, 0x42, 0x42, 0x24, 0x18, 0x08, 0x08, 0x08, 0, 0,  // Y
	0, 0x7E, 0x04, 0x08, 0x10, 0x20, 0x40, 0x7E, 0, 0  // Z
};

void drawLetter(int x, int y, int c)
{
	int i, j;
	int offset = (352*y*10)+(x*8);
	c = (c-32) * 10;

	for(i=0; i<10; i++)
	{
		for(j=0; j<8; j++)
		{
			frame[offset+j] = 0xFFFFFF * ((letters[c]>>(7-j))&0x01);
		}
		offset+=352;
		c++;
	}
}

void drawText(int x, int y, char *text)
{
	int i = 0;
	int c = 32;
	while(i<43)
	{
		c = text[i];
		if(c<32) { break; }
		if(c>90) { c = 32; }
		i++;
		drawLetter(x, y, c);
		x++;
		if(x>43) { x=0; y++; }
		if(y>21) { return; }
	}
}