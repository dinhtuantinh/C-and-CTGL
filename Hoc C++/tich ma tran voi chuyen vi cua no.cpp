
#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		long long n,m;
		cin>>n>>m;
		long long a[n][m], b[m][n];
		for(long long i=0;i<n;i++){
			for(long long j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		for(long long i=0;i<m;i++){
			for(long long j=0;j<n;j++){
				b[i][j]=a[j][i];
			}
		}
		long long x=n,y=m;
		if(n>m){
			n=y;
			m=x;
		}
		long long c[n][n];
		for(long long i=0;i<n;i++){
			for(long long j=0;j<n;j++){
				c[i][j]=0;
				for(long long k=0;k<m;k++){
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		cout<<"Test "<<t<<":\n";
		for(long long i=0;i<n;i++){
			for(long long j=0;j<n;j++){
				cout<<c[i][j]<<"	";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}


