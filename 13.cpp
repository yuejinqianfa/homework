#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define defaultSize 50
typedef struct {
	char* ch;
	int maxSize;
	int n;
}HString;
//初始化
bool initStr(HString& S) {
	S.ch = (char*)malloc(defaultSize * sizeof(char));
	if (S.ch == NULL) { printf("存储分配失败!\n"); exit(1); }
	S.ch[0] = '\0'; S.n = 0; S.maxSize = defaultSize;
	return true;
}
//创建
bool createStr(HString& S, char A[], int n) {
	if (S.ch == NULL) { printf("存储分配失败!\n"); exit(1); }
	for (int j = 0; j < n; j++)
		S.ch[j] = A[j];
	S.n = n;
	return true;
}
//输出
bool printStr(HString& S, int n) {
	for (int i = 0; i < n; i++)
		printf("%c ", S.ch[i]);
	printf("\n");
	return true;
}
int stringToInt(HString& S,int n)
{
	if (n > 0) return stringToInt(S, n - 1) * 10 + S.ch[n]-48;
	else return S.ch[0]-48;
}
int main()
{
	HString S;
	initStr(S);
	char A[] = {'4','3','5','6','7'};
	createStr(S, A, 5);
	printStr(S, 5);
	printf("转换为整数是%d", stringToInt(S, 4));
	return 0;
}