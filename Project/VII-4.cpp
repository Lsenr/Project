//#include <stdio.h>
//int main() {
//	int a[10];
//	int n, max, min, maxs, mins, temp;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	max = a[0];
//	min = a[0];
//	for (int i = 1; i < n; i++) {
//		if (a[i] >= max)max = a[i];
//		if (a[i] <= min)min = a[i];
//	}
//	printf("max=%d min=%d\n", max, min);
//	for (int i = 0; i < n; i++) {
//		if (a[i] == max)maxs = i;
//		if (a[i] == min)mins = i;
//	}
//	printf("maxs=%d mins=%d\n", maxs, mins);
//	if (n == 2) {
//		temp = a[0];
//		a[0] = min;
//		a[mins] = temp;
//	}
//	else {
//		temp = a[0];
//		a[0] = min;
//		a[mins] = temp;
//		temp = a[n - 1];
//		a[n - 1] = max;
//		a[maxs] = temp;//开头为最大时这里出现错误
//	}
//	for (int i = 0; i < n; i++)
//		printf("%d ", a[i]);
//	return 0;
//}