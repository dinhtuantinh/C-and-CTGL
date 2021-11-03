#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
//	int t;
//	cin>>t;
//	while(t--){
//	
		int a,b,c,d;
		while(cin>>a>>b>>c>>d){
		
			if(a==0&&b==0&&c==0&&d==0){
				break;
			}	
			else{
				int count=0,x;
				while(a!=b||c!=d||b!=c){
					x=a;
					a=abs(a-b);
					b=abs(b-c);
					c=abs(c-d);
					d=abs(d-x);
					count++;
				}
				cout<<count<<endl;
			}
 		}

	return 0;
}

