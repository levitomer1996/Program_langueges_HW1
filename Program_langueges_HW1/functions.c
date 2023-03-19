#include "functions.h"

int getMinMax(int a, int b, char c) {
	int greater = a > b;
	int smaller = a < b;
	int result = (greater && c == 60) || (smaller && c == 62);
	return (a * result) + (b * !result);
}

//סעיף א
int* sortArrayForLoop(int* array)
{
	for (int i = 0; i < 5; i++)
	{
		
	}
}
