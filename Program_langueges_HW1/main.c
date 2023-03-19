#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "functions.h"

int main() {
	printf("%d", getMinMax(400, 1000, '>'));
    int arr[] = { 532, 365, 12, 438, 2000 };
    int i;

    printf("Before sorting: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    sortArrayByGoto(arr);

    printf("\nAfter sorting: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

}