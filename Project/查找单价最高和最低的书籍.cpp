//#include <iostream>
//#include <string>
//#include <cstdio>
//#include <iomanip>
//using namespace std;
//
//struct book {
//	string name;
//	double price;
//}book[10];
//
//int main()
//{
//	int n;
//	double maxprice, minprice;
//	cin >> n;
//	getchar();
//	for (int i = 0; i < n; i++) {
//		getline(cin, book[i].name);
//		cin >> book[i].price;
//		getchar();
//	}
//	minprice = book[0].price;
//	maxprice = book[0].price;
//	for (int i = 1; i < n; i++) {
//		if (book[i].price <= minprice)minprice = book[i].price;
//
//		if (book[i].price >= maxprice)maxprice = book[i].price;
//	}
//	for (int i = 0; i < n; i++) {
//		if (book[i].price == maxprice)cout << "highest price: " << setiosflags(ios::fixed) << setprecision(1) << maxprice << ", " << book[i].name << endl;
//	}for (int i = 0; i < n; i++) {
//		if (book[i].price == minprice)cout << "lowest price: " << setiosflags(ios::fixed) << setprecision(1) << minprice << ", " << book[i].name << endl;
//
//	}
//
//	return 0;
//}