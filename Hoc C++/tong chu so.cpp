#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
string n;
int so(string n){
    int s=0;
    for(int i=0;i<=n.size()-1;i++){
        s+=int(n[i]-'0');
    }
    return s;
}
int so1(int n){
    int s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main( ){
    cin>>n; 
	int res=1;
    int x=so(n);
    while(abs(x)>9){
        x=so1(x);
        res++;
    }
    cout<<res;
    
}

