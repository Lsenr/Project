//#include <stdio.h>
//
//void pyramid(int n);
//
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//	pyramid(n);
//
//	return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void pyramid(int n) {
//	int l, i, j, k;
//	k = n;
//	i = n;
//	for (int t = 1; k >= t; t++, i--) {
//		j = i;
//		for (; j - 1 > 0; j--)printf(" ");
//		for (int o = t; o > 0; o--)printf("%d ", t);
//		printf("\n");
//	}
//}