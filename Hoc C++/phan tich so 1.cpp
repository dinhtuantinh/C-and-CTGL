#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
long long n, k, a[101];
bool stop;
void sinh(){
	long long i=k;
	while(i>0&&a[i]==1) i-=1;
	if(i<=0) stop=true;
	else{
		a[i]-=1;
		long long c=k-i+1;
		k=i;
		for(long long j=i+1;j<=i+c/a[i];j++){
			a[j]=a[i];
		}
		k+=c/a[i];
		if(c%a[i]){
			a[++k]=c%a[i];
		}
	}
}
int main(){
	long long t;
	cin>>t;
	while(t--){
		cin>>n;
		k=1;
		a[k]=n;
		stop=false;
		while(!stop){
			for(long long i=1;i<=k;i++){
				if(i==1) cout<<"(";
				cout<<a[i];
				if(i<k) cout<<" ";
				else cout<<") ";
			}
			sinh();
		}
		cout<<endl;
	}
	return 0;
}
