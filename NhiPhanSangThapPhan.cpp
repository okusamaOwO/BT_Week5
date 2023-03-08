#include<bits/stdc++.h>
using namespace std ;
int main(){
    /// bum bum bum
    string s ;
    getline(cin, s);
    int sum = 0;
    /// a dau
    /// vd 1001 /// neu ma la 0 ay thi nhan
    /// sao nhi /// cai so thu tu cua no chinh la so mu luon s y
    int n = s.length();
    for(int i =0 ; i < n; i++){
        if(s[i]=='1')sum += pow(2,n-i-1);
    }
    cout << sum ;

}
