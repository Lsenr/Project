//#include <stdio.h>
//
//double fact(int n);
//
//int main(void)
//{
//	int i;
//	double sum;
//
//	sum = 0;
//	for (i = 1; i <= 10; i++)
//		sum = sum + fact(i);
//
//	printf("1!+2!+...+10! = %f\n", sum);
//	return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//double fact(int n) {
//	double sum1 = 1;
//	if (n >= 0) {
//		for (int i = 1; i <= n; i++)
//		{
//			sum1 *= i;
//		}
//	}
//	else return 0;
//	double fact = sum1;
//	return fact;
//}