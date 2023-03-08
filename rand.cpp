#include<bits/stdc++.h>
using namespace std ;
int randomNumber(int n){
    return rand()%n;
}
int main(){
    srand(time(0));
    int n ;
    cin >> n ;
    cout << randomNumber(n);
}
