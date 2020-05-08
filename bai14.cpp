#include<bits/stdc++.h>
using namespace std;
int dem = 0;
int n, k, x[40];
void init(int temp[]) {
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		cin >> x[i];
		temp[x[i]]++;
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
	}
	else{
		dem = k;
	}
}

int  rs(int temp[]) {
	if (dem != k){
		for (int i = 1; i <= k; i++) {
			temp[x[i]]++;
			if (temp[x[i]] == 1){
			dem++;
			}
		}
		return dem;
	}
	else{
		return k;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int temp[40] = {0};
		init(temp);
		sinhkt();
		cout << rs(temp) << endl;
		dem = 0;
	}
	
}

