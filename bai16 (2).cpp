#include <bits/stdc++.h>

using namespace std;

int n,k;
vector<int> x;
int matrix[11][11];
vector<bool> unuse(11,true);
vector< vector<int> > res;

void display();
void back_track(int);

int main()
{
        cin >> n >> k;
        x.resize(n + 1,0);
        for(int i = 1; i <= n;i++)
            for(int j = 1; j <= n; j++)
                cin >> matrix[i][j];
        back_track(1);
        cout << res.size() << endl;
        for(int i = 0; i < res.size(); i++){
            for(int j = 1; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    return 0;
}

void display(){
    int s = 0;
    for(int i = 1; i <= n; i++){
        s += (matrix[i][x[i]]);
    }
    if(s == k){
        res.push_back(x);
    }
}
void back_track(int i){
    for(int j = 1; j <= n; j++){
        if(unuse[j]){
            x[i] = j;
            unuse[j] = false;
            if(i == n)
                display();
            else
                back_track(i + 1);
            unuse[j] = true;
        }
    }
}
