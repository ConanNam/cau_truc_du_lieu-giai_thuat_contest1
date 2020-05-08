#include<bits/stdc++.h>
using namespace std;
void next_gen_gray(int n){
	if (n <= 0)
		return;
	vector<string> arr;
	
	// Sinh ma Gray dua tren 1 bit ban dau.
	arr.push_back("0");
	arr.push_back("1");
	
	/*Chuoi gray code 2 bit duoc thuc hien bang cách:
		 Viet chuoi gray code 1 bit ra (0, 1) , ghép thêm bit 0 o dau ( 00, 01)
		Viet chuoi gray code 1 bit ra theo thu tu nguoc lai (1, 0) , ghép thêm bit 1 o dau (11, 10)
	*/
	int i, j;
	for(int i = 2; i < pow(2,n); i = 2 * i) // do ma duoc tao ra boi 2 phan nhu VD tren;
	{
		// i << n toan tu dich bit; i << n = pow(2,n);
		for(int j = i -1; j >= 0 ; j--){
			arr.push_back(arr[j]);
			/* VD: voi n = 2; ban dau chuoi "01"; sau khi loop: "0110"
			Tao chuoi de them 0 voi 1 dang truoc
			*/
		}
		
		// them 0 dang truoc nua dau tien; VD: "01";
		for(int j = 0; j < i; j++){
			arr[j] = "0" + arr[j];
		}
		// them 1 dang truoc nua con lai; VD: "10";
		for(int j = i; j < 2 * i; j++){
			arr[j] = "1" + arr[j];
		}
	}
	
	for(int i = 0 ; i < arr.size(); i++){
		cout << arr[i] << " ";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		next_gen_gray(n);
		cout << endl;
	}
}
