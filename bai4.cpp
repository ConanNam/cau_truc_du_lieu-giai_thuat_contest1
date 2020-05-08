#include<bits/stdc++.h>
using namespace std;
int a[1000];
int n;
void Khoitao(){
	for(int i=0; i<n;i++){
		a[i]=0;
	}
}
bool Check(){
	for(int i=0; i<n; i++){
		if(a[i]==0) return false;
	}
	return true;
}
void Hienthi(){
	for(int i=0; i<n; i++){
		if(a[i]==0) cout<<'A';
		else cout<<'B';
	}
	cout<<" ";
}
void sinh(){
	for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            a[i]=0;
        }
        else{
            a[i]=1;
            break;
        }
    }
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>n;
		Khoitao();
		Hienthi();
		while(Check()==false){
			sinh();
			Hienthi();
		}
		cout<<endl;
	}
	return 0;
}
