#include<bits/stdc++.h>
using namespace std;

long long int binary(long long int n){ // chuyen he 10 sang he 2 su dung de quy
	if (n == 1) return 1;
	else if (n % 2 == 0) return 10 * binary(n/2);
	else return 10 * binary(n/2) + 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long int base = 1, d = 9;
		while(d % n != 0){
			base++;
			d = 9 * binary(base);
		}
		cout << d << endl;
	}
}
