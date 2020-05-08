#include<bits/stdc++.h>
using namespace std;

char flip(char c){
	return (c == '0') ? '1' : '0';
}

/* Thuat toan: Giu nguyen ki tu dau cua ma gray;
	cac ki tu con lai dua theo quy tac:
		If current gray code bit is 0, then copy previous binary code bit, else copy invert of previous binary code bit.
*/

void gray_to_binary(string gray){
	string binary = "";
	
	binary += gray[0];
	
	for(int i = 1; i < gray.length(); i++){
		
		if(gray[i] == '0'){
			binary += binary[i-1];
		} else{
			binary += flip(binary[i-1]);
		}
	}
	cout << binary << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		gray_to_binary(s);
	}
	
	return 0;
}
