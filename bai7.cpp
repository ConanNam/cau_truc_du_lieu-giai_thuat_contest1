#include<bits/stdc++.h>
using namespace std;

int X[1000], stop = 0 , n, k;

void init(){
	cin >> n;
	k = 1;
	X[k] = n;
}

void rs(){
	cout <<"(";
	for(int i = 1; i<= k; i++){
		if (i != k){
			cout << X[i] <<" ";
		}else{
			cout << X[i];
		}
	}
	cout << ") ";
}

void next_div(){
	int i = k, j, R, D, S;
	while(i > 0 && X[i] == 1) i--;
	if(i > 0){
		X[i]--;
		D = k - i + 1;
		R = D/X[i];
		S = D % X[i];
		k = i;
		if (R > 0){
			for(j = i + 1; j <= i+R; j++){
				X[j] = X[i];
			}
			k = k + R;
		}
		if(S > 0){
			k++;
			X[k] = S;
		}
	}
	else{
		stop = 1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		while(!stop){
			rs();
			next_div();
		}
		cout << endl;
		stop = 0;
	}
}

