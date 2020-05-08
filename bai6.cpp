#include<iostream>
using namespace std;

int n, x[1000] = { 0 }, stop = 0;
void in() {
	for (int i = 1; i <= n; i++) {
		cout << x[i];
	}
	cout << " ";
}

void init() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		x[i] = i;
	}
}

void sinhkt() {
	int i = n-1;
	while (i > 0 && x[i] > x[i + 1]) {
		i--;
	}
	if (i > 0) {
		int k = n;
		while (k > 0 && x[k] < x[i]) {
			k--;
		}
		swap(x[k], x[i]);
		int d = i + 1;
		int c = n;
		while (d <= c) {
			swap(x[d], x[c]);
			d++;
			c--;
		}
	}
	else {
		stop = 1;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		init();
		while (!stop) {
			in();
			sinhkt();
		}
		cout << endl;
		stop = 0;
	}
}