#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b);
int LCM(int a, int b);

int main(void)
{
	int a, b;

	printf("請輸入2個數字 :");
	scanf("%d%d", &a, &b);
	printf("這2數之最小公倍數為 : %d\n", LCM(a,b));

	system("pause");
	return 0;
}

int GCD(int a, int b) {
	 while ((a %= b) && (b %= a));
	return a + b;
}
int LCM(int a, int b) {
	return a * b / GCD(a, b);
}