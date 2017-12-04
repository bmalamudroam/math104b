#include <iostream>
#include <cmath>
using namespace std;

void swap(double* arr1, double* arr2, int size);

int main()
{
	int row = 3;
	int col = 3;
	double A[3][3] = {
		{1,2,3},
		{0,5,6},
		{0,8,9}};
	int max_row = 1;
	for (int i = 0; i < col; ++i)
	{
		for (int j = i; j < row; ++i)
		{
			if (abs(A[j][i]) > abs(A[max_row][i]))
			{
				max_row = j;
			}
		}
		swap(A[i], A[max_row], col);
	}

	return 0;
}

void swap(double* arr1, double* arr2, int size) {
	double temp;
	for (int i = 0; i < size; ++i)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}