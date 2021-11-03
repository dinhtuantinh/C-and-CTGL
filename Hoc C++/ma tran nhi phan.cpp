#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
//	int t;
//	cin>>t;
//	while(t--){
		int n;
		cin>>n;
		int a[n+2][5];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=3;j++){
				cin>>a[i][j];
			}
		}
		int count=0;
		for(int i=1;i<=n;i++){
			int dem=0;
			for(int j=1;j<=3;j++){
				if(a[i][j]==1) dem++;
			}
			if(dem>1) count++;
		}
		cout<<count<<endl;
	//}
	return 0;
}

