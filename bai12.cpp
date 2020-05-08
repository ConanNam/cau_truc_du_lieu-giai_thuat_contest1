#include<bits/stdc++.h>
using namespace std;

void gen_binary_k_bit_1(int n, int k){
	
	string curr, str;
	int j = n;
	while(j--){
		str += '0';
	}
	// use function next_permutation() to gen;
	
	for(int i = 1; i <= k; i++){
		// set k bit end to '1'
		str[n-i] = '1';
	}
		curr = str;
		do{
			cout << curr << endl;
		}while(next_permutation(curr.begin(),curr.end()));
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		gen_binary_k_bit_1(n,k);
	}
}
