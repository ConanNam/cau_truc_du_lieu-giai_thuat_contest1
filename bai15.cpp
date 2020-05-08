
#include<bits/stdc++.h>
using namespace std;
/*int n;
string x;

void init() 
{	cin >> n;
	cin >> x;
}

	void sinhkt() {
	int i = x.length() - 2;
	while (x[i] >= x[i + 1]) {
		i--;
	}
	if (i >= 0) {
		int k = x.length() - 1;
		while (x[i] > x[k]) {
			k--;
		}
		swap(x[i],x[k]);
		int d = i + 1;
		int c = x.length() - 1;
		while (d <= c) {
			swap(x[d], x[c]);
			d++;
			c--;
			}
			cout << n << " " << x << endl;
		}
	else {
		cout << n << " BIGGEST" << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		init();
		sinhkt();
	}
}
*/

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; string s;
		cin >> n;
		cin.ignore();
		cin >> s;
		if (next_permutation(s.begin(),s.end())){
			cout << n << " " << s << endl;
		} else{
			cout << n << " BIGGEST" << endl;
		}
	}
}
