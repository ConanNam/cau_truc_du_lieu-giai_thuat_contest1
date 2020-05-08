#include<iostream>
#include<algorithm>
using namespace std;

int X[1000] = {0}, n;

void init(){
	cin >> n;
	for(int i = 0; i < n; i++){
		X[i] = i + 1;
	}
	reverse(X, X+n);
}

void rs(){
	for(int i = 0 ; i < n ; i++){
		cout << X[i];
	}
	cout << " ";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		init();
		do{
			rs();
		}while(prev_permutation(X, X+n));
		cout << endl;
	}
}
