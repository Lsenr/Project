//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <iomanip>
//using namespace std;
//int main(void) {
//	int n, biao[100000] = { 0 }, sum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int n1;
//		cin >> n1;
//		for (int i = 0; i < n1; i++) {
//			int temp;
//			cin >> temp;
//			if (biao[temp] == 0 && n1 != 1)biao[temp] = 1;
//		}
//
//
//	}
//	int n2;
//	cin >> n2;
//	for (int i = 0; i < n2; i++) {
//		int temp;
//		cin >> temp;
//		if (biao[temp] == 0) {
//			if (sum != 0)
//				printf(" ");
//			cout << setw(5) << setfill('0') << temp;
//			biao[temp] = -1;
//			sum++;
//		}
//	}
//	if (sum == 0)cout << "No one is handsome\n";
//}
