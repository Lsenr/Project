//#include<stdio.h>
//int main() {
//	int n,t=1;
//	char c;
//	scanf("%c%d", &c, &n);
//	int l = (n + 1) / 2;
//	for (int i = 0; i < l; i++) {
//		for (int j = 0; j< l-i-1; j++) {
//			printf(" ");
//		}
//		if (i == 0) {
//			printf("%c\n",c);
//			c++;
//			continue;
//		}
//		else {
//			printf("%c", c);
//		}
//		for (int j = 0; j < 2 * i - 1; j++) {
//			printf(" ");
//		}
//		printf("%c\n", c++);
//	}c = c - 2;
//	for (int i = l-1; i >0; i--) {
//		for (int j = 0; j < t; j++) {
//			printf(" ");
//		}t++;
//		printf("%c", c);
//		for (int j = 0; j < i * 2 - 3; j++) {
//			printf(" ");
//		}if (i!=1) {
//			printf("%c\n", c--);
//		}
//	}
//	return 0;
//}