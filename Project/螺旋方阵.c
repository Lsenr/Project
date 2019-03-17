//#include <stdio.h>
//main()
//{
//	int c = 1, x = 0, y = 0, n, a[10][10] = { 0 };
//	scanf("%d", &n);
//	a[x][y] = 1;
//	while (n*n != c)
//	{
//		while (y + 1 < n && !a[x][y + 1])
//			a[x][++y] = ++c;
//		while (x + 1 < n && !a[x + 1][y])
//			a[++x][y] = ++c;
//		while (y - 1 >= 0 && !a[x][y - 1])
//			a[x][--y] = ++c;
//		while (x - 1 >= 0 && !a[x - 1][y])
//			a[--x][y] = ++c;
//	}
//	for (x = 0; x < n; x++)
//	{
//		for (y = 0; y < n; y++)
//		{
//			printf("%3d", a[x][y]);
//		}
//		printf("\n");
//	}
//}

//SELF

//#include <stdio.h>
//int main() {
//	int a[10][10] = { 0 }, n,num=1;
//	scanf("%d", &n);
//	a[0][0] = 1;
//	int x = 0, y = 0;
//	for (int i = 1; i !=n*n;) {
//		for (; x+1 < n && !a[y][x + 1];) {
//			a[y][++x] = ++i;
//			printf("x=%d y=%d\n", x, y);
//			printf("a=%d\n", a[y][x]);
//		}
//		for (; y+1 < n && !a[y + 1][x]; ) { a[++y][x] = ++i; 
//		printf("x=%d y=%d\n", x, y);
//		printf("a=%d\n", a[y][x]);
//		}
//		for (; x > 0 && !a[y][x - 1]; ) {
//			a[y][--x] = ++i;			printf("x=%d y=%d\n", x, y);
//			printf("a=%d\n", a[y][x]);
//		}
//		for (; y > 0 && !a[y - 1][x]; ) {
//			a[--y][x] = ++i;			printf("x=%d y=%d\n", x, y);
//			printf("a=%d\n", a[y][x]);
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++)
//			printf("%3d", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}