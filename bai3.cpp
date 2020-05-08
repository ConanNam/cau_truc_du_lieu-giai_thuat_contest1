//#include<iostream>
//#include<algorithm>
//using namespace std;

//int n, x[1000];

//void init() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> x[i];
//	}
//}
//
//void sinhkt() {
//	int i = n - 1;
//	while (i > 0 && x[i] > x[i + 1]) {
//		i--;
//	}
//	if (i > 0) {
//		int k = n;
//		while (x[i] > x[k]) {
//			k--;
//		}
//		swap(x[i], x[k]);
//		int d = i + 1;
//		int c = n;
//		while (d <= c) {
//			swap(x[d], x[c]);
//			d++;
//			c--;
//		}
//
//		for (int i = 1; i <= n; i++) {
//			cout << x[i] << " ";
//		}
//		cout << endl;
//	}
//	else {
//		for (int i = 1; i <= n; i++) {
//			cout << i << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		init();
//		sinhkt();
//	}
//}
