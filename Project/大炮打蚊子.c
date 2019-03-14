#include <stdio.h>
int main() {
	char B[21][21];
	int L[21][21];
	int m, n, k;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%c", &B[j][i]);
			if (B[j][i] == '0') {
				L[j][i] = 3;
			}
			else if (B[j][i] == '#') {
				L[j][i] = 2;
			}
		}
	}
	scanf("%d", &k);
	int kn[401], km[401];
	int ktemp = k;
	for (int i = 0; i < k; i++) {
		scanf("%d%d", &km[i], &kn[i]);
	}
	for (int i = 0; i < k; i++) {
		int dead = 0;
		if (ktemp != 0) {
			if (L[km[i]][kn[i]] == 2 || L[km[i]][kn[i]] == 1) {
				L[km[i]][kn[i]] = 0; dead++;
			}
					if (L[km[i] + 1][kn[i]] == 1) {
						dead++; L[km[i] + 1][kn[i]]--;
					}
					if (L[km[i] - 1][kn[i]] == 1) {
						dead++; L[km[i] - 1][kn[i]];
					}
					if (L[km[i]][kn[i] + 1] == 1) { dead++; L[km[i]][kn[i] + 1]--; }
					if (L[km[i]][kn[i] - 1] == 1) {
						dead++; L[km[i]][kn[i] - 1]--;
					}
					if (L[km[i] + 1][kn[i]] == 2)L[km[i] + 1][kn[i]]--;
					if (L[km[i] - 1][kn[i]] == 2)L[km[i] - 1][kn[i]]--;
					if (L[km[i]][kn[i]+1] == 2)L[km[i]][kn[i]+1]--;
					if (L[km[i]][kn[i]-1] == 2)L[km[i]][kn[i]-1]--;
					printf("%d", dead);
			ktemp--;
		}
	}
	return 0;
}