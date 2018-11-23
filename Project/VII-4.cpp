#include <stdio.h>
int main() {
	int a[10];
	int n, max, min, maxs, mins, temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	max = a[0];
	min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] >= max)max = a[i];
		if (a[i] <= min)min = a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == max)
			maxs = i;
		if (a[i] == min)
			mins = i;
	}
	printf("maxs=%d mins=%d max=%d min=%d", maxs, mins, max, min);
	temp = a[0];
	a[0] = a[mins];
	a[mins] = temp;
	temp = a[n - 1];
	a[n - 1] = a[maxs];
	a[maxs] = temp;
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}