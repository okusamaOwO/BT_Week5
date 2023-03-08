#include<bits/stdc++.h>
using namespace std ;
int kiemTra(int k, int n){
    if(k <0 || n <0 || k > n) return 0 ;
    return 1 ;
}
int giaiThua(int n){
    if(n==0) return 1 ;
    return(n*giaiThua(n-1));
}
int toHop(int k, int n){
    ///(n!)/(n-k)!k!
    return (giaiThua(n)/(giaiThua(n-k)*giaiThua(k)));
}
int main(){
    int k, n ;
    /// in to hop chap k cua n phan tu
    /// dung de quy a
    do{
        cin >> k >> n ;
        if(kiemTra(k,n) == 0) return 0 ;
        /// to hop chap k a
        cout << toHop(k, n)<<endl ;
    }
    while(k!=-1 && n!= -1);

}
