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
	int isGreater, temp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			isGreater = array[j] > array[j + 1];
			temp = array[j];
			array[j] = array[j + isGreater];
			array[j + isGreater] = temp;
		}

	}
	return array;
}
//סעיף ב
int* sortArrayWhileLoop(int* array)
{
	int isGreater, temp, i = 0, j = 0;
	while (i<5)
	{
		while (j < 4) {
			isGreater = array[j] > array[j + 1];
			temp = array[j];
			array[j] = array[j + isGreater];
			array[j + isGreater] = temp;
			j++;
		}
		j = 0;
		i++;
	}
	return array;
}
//סעיף ג
int* sortArrayByIf(int* arr)
{
    int temp;
    if (arr[0] > arr[1]) {
        temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
    if (arr[1] > arr[2]) {
        temp = arr[1];
        arr[1] = arr[2];
        arr[2] = temp;
        if (arr[0] > arr[1]) {
            temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
        }
    }
    if (arr[2] > arr[3]) {
        temp = arr[2];
        arr[2] = arr[3];
        arr[3] = temp;
        if (arr[1] > arr[2]) {
            temp = arr[1];
            arr[1] = arr[2];
            arr[2] = temp;
            if (arr[0] > arr[1]) {
                temp = arr[0];
                arr[0] = arr[1];
                arr[1] = temp;
            }
        }
    }
    if (arr[3] > arr[4]) {
        temp = arr[3];
        arr[3] = arr[4];
        arr[4] = temp;
        if (arr[2] > arr[3]) {
            temp = arr[2];
            arr[2] = arr[3];
            arr[3] = temp;
            if (arr[1] > arr[2]) {
                temp = arr[1];
                arr[1] = arr[2];
                arr[2] = temp;
                if (arr[0] > arr[1]) {
                    temp = arr[0];
                    arr[0] = arr[1];
                    arr[1] = temp;
                }
            }
        }
    }

	return arr;
}
//סעיף ד
int* sortArrayByGoto(int* arr)
{
    int i = 0, j, isGreater, temp;
firstLoop:
    j = 0;
    secondLoop:
    isGreater = arr[j] > arr[j + 1];
    temp = arr[j];
    arr[j] = arr[j + isGreater];
    arr[j + isGreater] = temp;
    j++;
    if (j < 4)
        goto secondLoop;
    i++;
    if (i < 5)
        goto firstLoop;
    
    return arr;
}
