#include<stdio.h>
bool searchfront(int A[],int j)
{
	for (int i = 1; i < j-1; i++)
	{
		if (A[j] < A[i]) return false;
	}
	return true;
}

bool searchback(int A[], int j)
{
	for (int i = j + 1; i < 9; i++)
	{
		if (A[j] > A[i]) return false;
	}
	return true;
}

int main()
{
	int A[9] = {12, 39, 43, 15, 01, 31, 47, 54, 65};
	for (int i = 1; i < 8; i++)
	{
		if (searchfront(A, i) && searchback(A, i))
		{
			printf("%d\n", A[i]);
		}
	}
	return 0;
}
