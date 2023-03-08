#include<bits/stdc++.h>
using namespace std ;
int dx[8] = {1,1,1,0,0,-1,-1,-1};
int dy[8] = {1,0,-1,1,-1,0,1,-1};

int main(){
    int m, n ;
    cin >> m >> n ;
    char a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            /// bay gio lay duoc tung cai a[i][j] roi
            if(a[i][j] == '*') {
                cout <<"*"<<" ";
                continue ;
            }
            int sum = 0;
            for(int q =0 ; q < 8; q++){
                int i1 = i+dx[q];
                int j1 = j+dy[q];
                if(i1 < m && i1 >=0 && j1 < n && j1 >=0 && a[i1][j1]=='*'){
                    sum ++ ;
                }

            }
            cout << sum << " ";
        }
        cout << endl ;
    }

}
