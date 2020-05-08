#include<bits/stdc++.h>
using namespace std;

int minCoin(int x[], int n ,  int V){
	sort(x, x+n);
	int count = 0;
    for (int i = n - 1; i >= 0; i--) { 
        if(V >= x[i]){
        	int coin = V / x[i];
        	V = V - x[i] * coin;
        	count += coin;
		}
    }
    return count;
}

int main(){
	//int t;
	//cin >> t;
	//while(t--){
		int n, s, x[30];
		cin >> n >> s;
		for(int i = 0; i < n; i++){
			cin >> x[i];
		}
		cout << minCoin(x,n,s) << endl;
	//}
}
