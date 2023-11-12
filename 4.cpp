//#include<stdio.h>
//#define maxsize 20
//bool judge(int A[3][4], int n, int m)
//{
//	int arr[maxsize];
//	for (int i = 0; i < maxsize; i++)
//	{
//		arr[i] = 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr[A[i][j]] == 0)
//			{
//				arr[A[i][j]] = 1;
//			}
//			else
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
//bool print(int A[3][4], int n, int m)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", A[i][j]);
//		}
//		printf("\n");
//	}
//	return true;
//}
//int main()
//{
//	int A[3][4] = { {1,2,3,4},{5,6,7,8},{9,11,11,12} };
//	print(A,3,4);
//	if (judge(A, 3, 4))
//	{
//		printf("有重复元素\n");
//	}
//	else
//	{
//		printf("无重复元素\n");
//	}
//}