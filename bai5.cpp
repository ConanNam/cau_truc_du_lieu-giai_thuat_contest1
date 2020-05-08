#include<iostream>
using namespace std;
bool OK;
int n, k, x[1000];


void init() {
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		x[i] = i;
	}
	OK = false;
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
	}
	else {
		OK = true;
	}
}

void rs() {
	for (int i = 1; i <= k; i++) {
		cout << x[i];
	}
	cout << " ";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		init();
		while (!OK) {
			rs();
			sinhkt();
		}
		cout << endl;
	}
	
}

