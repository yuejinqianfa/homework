//#include<stdio.h>
//#include<stdlib.h>
//#define MaxTerms 100
//#define M 6
//#define N 7
//typedef int DataType;
//typedef struct {
//	int row, col;
//	DataType value;
//} Triple;
//typedef struct {
//	int Rows, Cols, Terms;
//	Triple elem[MaxTerms];
//}SparseMatrix;
////输入稀疏矩阵建立三元组表
//void convert(int A[M][N], SparseMatrix&B) {
//	int i, j;
//	int total = 0;
//	for (i = 0; i <M; i++)
//		for (j = 0; j <N; j++)
//			if (A[i][j] != 0) {
//				B.elem[total].row = i; B.elem[total].col = j;
//				B.elem[total].value = A[i][j];
//				total++;
//			}
//	B.Rows = M;
//	B.Cols = N;
//	B.Terms = total;
//}
////打印
//void printTriple(SparseMatrix&A) {
//	printf("Rows=%d,Cols=%d,Terms=%d\n", A.Rows, A.Cols, A.Terms);
//	for (int i = 0; i <A.Terms; i++)
//		printf("(%d,%d,%d)\n", A.elem[i].row, A.elem[i].col, A.elem[i].value);
//	printf("\n");
//}
//int search(SparseMatrix& A,int n)
//{
//	for (int i = 0; i < A.Terms; i++)
//	{
//		if (A.elem[i].value == n) return i;
//	}
//	return -1;
//}
//int main() {
//	SparseMatrix B;
//	int A[M][N] = {
//		{0, 0, 3, 0, 4, 0, 0},
//		{0, 0, 5, 7, 0, 0, 0},
//		{0, 0, 0, 0, 0, 0, 0},
//		{0, 2, 6, 0, 0, 0, 0},
//		{0, 0, 0, 0, 0, 0, 0},
//		{0, 0, 0, 0, 1, 0, 0}
//	};
//	convert(A, B);
//	printTriple(B);
//	if (search(B, 1) >= 0) printf("rows:%d cols:%d", B.elem[search(B, 1)].row, B.elem[search(B, 1)].col);
//	else printf("does not exist");
//	return 0;
//}