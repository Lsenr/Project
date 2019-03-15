//#include <stdio.h>
//int main() {
//	char B[21][21],tempc;
//	int L[21][21];
//	int m, n, k;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		getchar();
//		for (int j = 0; j < m; j++) {
//			scanf("%c", &tempc);
//			if (tempc == '\n')continue;
//			B[i][j]= tempc;
//			if (B[i][j] == '0') {
//				L[i][j] = 0;
//			}
//			else if (B[i][j] == '#') {
//				L[i][j] = 2;
//			}
//			else if (B[i][j] == '\n')L[j][i] = 4;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) { printf("%d ", B[i][j]); }
//		printf("\n");
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) { printf("%d ", L[i][j]); }
//		printf("\n");
//	}
//	printf("\n");
//	scanf("%d", &k);
//	int kn[401], km[401];
//	int ktemp = k;
//	for (int i = 0; i < k; i++) {
//		scanf("%d %d", &km[i], &kn[i]);
//	}
//	for (int i = 0; i < k; i++) {
//		printf("%d %d\n", km[i], kn[i]);
//	}
//	for (int i = 0; i < k; i++) {
//		int dead = 0;
//		if (ktemp != 0) {
//			if (L[km[i]][kn[i]] == 2 || L[km[i]][kn[i]] == 1) {
//				L[km[i]][kn[i]] = 0; dead++;
//			}
//					if (L[km[i] + 1][kn[i]] == 1) {
//						dead++; L[km[i] + 1][kn[i]]--;
//					}
//					if (L[km[i] - 1][kn[i]] == 1) {
//						dead++; L[km[i] - 1][kn[i]];
//					}
//					if (L[km[i]][kn[i] + 1] == 1) { dead++; L[km[i]][kn[i] + 1]--; }
//					if (L[km[i]][kn[i] - 1] == 1) {
//						dead++; L[km[i]][kn[i] - 1]--;
//					}
//					if (L[km[i] + 1][kn[i]] == 2)L[km[i] + 1][kn[i]]--;
//					if (L[km[i] - 1][kn[i]] == 2)L[km[i] - 1][kn[i]]--;
//					if (L[km[i]][kn[i]+1] == 2)L[km[i]][kn[i]+1]--;
//					if (L[km[i]][kn[i]-1] == 2)L[km[i]][kn[i]-1]--;
//					printf("%d\n", dead);
//			ktemp--;
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) { printf("%d ", L[i][j]); }
//			printf("\n"); 
//		}
//	}
//	return 0;
//}
///*去除输出调试之后*/
//#include <stdio.h>
//int main() {
//	char B[21][21], tempc;
//	int L[21][21];
//	int m, n, k;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		getchar();
//		for (int j = 0; j < m; j++) {
//			scanf("%c", &tempc);
//			if (tempc == '\n')continue;
//			B[i][j] = tempc;
//			if (B[i][j] == '0') {
//				L[i][j] = 0;
//			}
//			else if (B[i][j] == '#') {
//				L[i][j] = 2;
//			}
//			else if (B[i][j] == '\n')L[j][i] = 4;
//		}
//	}
//	scanf("%d", &k);
//	int kn[401], km[401];
//	int ktemp = k;
//	for (int i = 0; i < k; i++) {
//		scanf("%d %d", &km[i], &kn[i]);
//	}
//	for (int i = 0; i < k; i++) {
//		int dead = 0;
//		if (ktemp != 0) {
//			if (L[km[i]][kn[i]] == 2 || L[km[i]][kn[i]] == 1) {
//				L[km[i]][kn[i]] = 0; dead++;
//			}
//			if (L[km[i] + 1][kn[i]] == 1) {
//				dead++; L[km[i] + 1][kn[i]]--;
//			}
//			if (L[km[i] - 1][kn[i]] == 1) {
//				dead++; L[km[i] - 1][kn[i]];
//			}
//			if (L[km[i]][kn[i] + 1] == 1) { dead++; L[km[i]][kn[i] + 1]--; }
//			if (L[km[i]][kn[i] - 1] == 1) {
//				dead++; L[km[i]][kn[i] - 1]--;
//			}
//			if (L[km[i] + 1][kn[i]] == 2)L[km[i] + 1][kn[i]]--;
//			if (L[km[i] - 1][kn[i]] == 2)L[km[i] - 1][kn[i]]--;
//			if (L[km[i]][kn[i] + 1] == 2)L[km[i]][kn[i] + 1]--;
//			if (L[km[i]][kn[i] - 1] == 2)L[km[i]][kn[i] - 1]--;
//			printf("%d\n", dead);
//			ktemp--;
//		}
//	}
//	return 0;
//}