#include<bits/stdc++.h>
using namespace std;

string s;
int n , k, stop = 0;

void init(){
	cin >> n >> k;
	for(int i = 0 ; i < n; i++){
		s += 'A';
	}
}

bool check(string s){
	s += ' ';
	int count = 0, maxcount = 0;
	for(int i = 0; i <= s.length(); i++){
		if (s[i] == 'A'){
			count++;
		} else{
			maxcount = max(maxcount,count);
			count = 0;
		}
	}
	if (maxcount == k) return true;
	return false;
}

void gen(){
	int j = s.length() - 1;
	while(s[j] == 'B'){
		s[j] = 'A';
		j--;
	}
	if (j >= 0 ){
		s[j] = 'B';
	}
	else stop = 1;
}

void in(vector<string> b){
	cout << b.size() << endl;
	for(int i = 0 ; i < b.size(); i++){
		cout << b[i] << endl;
	}
}

int main(){
	//int t;
	//cin >> t;
	//while(t--){
		init();
		vector<string> b;
		while(!stop){
			gen();
			if (check(s)){
				b.push_back(s);
				}
				
		}
		in(b);
		s = "";
		stop = 0;
	//}
}
