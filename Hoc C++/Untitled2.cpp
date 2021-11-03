//// TONG UOC SO
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
//
//long long tong(int n){
//    if(n==1) return 1;
//    long long tong=0;
//    for(int i=2;i<=sqrt(n);i++){
//        if (n % i == 0){
//            if (i == (n / i))
//                tong+= i;
//            else
//                tong+=(i + n/i);
//        }
//    }
//    return (tong+1);
//}
////long long tong(int n){
////    if(n==1) return 1;
////    long long s=0;
////    for (int i = 1; i <= sqrt(n); i++) {
////            if (n % i == 0) {
////                int j = n/i;
////                if (i == j) {
////                    s = s + i;
////                } else {
////                    s = s + i + j;
////                }
////            }
////        }
////    return (s-n) ;
////}
//int main( ){
//    int a,b;
//    cin>>a>>b;
//    int dem=0;
//    if(a>b) swap(a,b);
//    for(int i=a;i<=b;i++){
//        if(tong(i) > i) dem++;
//    }
//    cout<<dem;
//}
bool check(int n){
    int s=0;
    for (int i=1; i<=sqrt(n); i++){
        if (n%i==0){
            if (i*i==n) s+=i;
            else {
                s+=(i+n/i);
            }
        }
    }
    s-=n;
    if (s>n) return true;
    return false;
}

void solve(){
    int a, b, c=0;
    cin >> a >> b;
    if (a>b) swap(a, b);
    for (int i=a; i<b; i++){
        if (check(i)) c++;
    } 
    cout << c << endl;
}
int main(){
    //faster();
    solve();
    return 0;
}
