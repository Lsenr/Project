#include <iostream>
#include <cstdio>
using namespace std;
int main(void) {
	int n, nl, nk, i = 0, d, left;
	char c;
	cin >> n >> c;
	if (n <= 0)return 0;
	nk = (i + 1)*(i + 1) * 2 - 1;
	for (i = 1; nk <= n; i++) {
		nl = i * i * 2 - 1;
		nk = (i + 1)*(i + 1) * 2 - 1;
		d = i;
	}
	if (nl == 1)left = n - 1;
	else left = n % nl;
	for (int j = 0; j < d; j++) {
		for (int k = j; k > 0; k--) {
			cout << " ";
		}
		for (int k = 2 * j; k < 2 * d - 1; k++) {
			if (k == 2 * d - 2)cout << c << endl;
			else cout << c;
		}
	}
	for (int j = d - 1; j > 0; j--) {
		for (int k = j - 1; k > 0; k--) {
			cout << " ";
		}
		for (int k = 2 * j - 1; k < 2 * d; k++) {
			if (k == 2 * d - 1)cout << c << endl;
			else cout << c;
		}
	}
	cout << left;
}
