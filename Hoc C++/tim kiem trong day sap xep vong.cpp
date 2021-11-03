#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,a;
		cin>>n>>x;
		//int a[n];
		int index=0;
		for(int i=1;i<=n;i++){
			cin>>a;
			if(a==x){
				index=i;
				//break;
			}
		}
		cout<<index<<endl;
	}
	return 0;
}
