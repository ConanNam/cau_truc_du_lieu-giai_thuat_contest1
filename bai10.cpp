#include<bits/stdc++.h>
using namespace std;

char XOR(char a, char b){
	return (a == b) ? '0' : '1';
}

void binary_to_gray(string binary){
	string gray = "";
	
	// ki tu dau tien giua NP va gray giong nhau;
	gray += binary[0];
	
	// cac ki tu khac thuc hien chuyen doi qua XOR;
	
	for(int i = 1; i < binary.length(); i++){
		gray += XOR(binary[i-1], binary[i]);
	}
	
	cout << gray << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		binary_to_gray(s);
	}
	return 0;
}
