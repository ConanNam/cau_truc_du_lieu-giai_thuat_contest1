/*#include<iostream>
using namespace std;

int n, k, x[1000] = { 0 };

void init() {
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		cin >> x[i];
	}
}

void sinhkt() {
	int i = k;
	while (i > 0 && x[i] == n - k + i) {
		i--;
	}
	if (i > 0) {
		x[i]++;
		for (int j = i + 1; j <= k; j++) {
			x[j] = x[j - 1] + 1;
		}
		for (int i = 1; i <= k; i++) {
			cout << x[i] << " ";
		}
		cout << endl;
	}
	else {
		for (int i = 1; i <= k; i++) {
			cout << i << " ";
		}
		cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		init();
		sinhkt();
	}
}
*/