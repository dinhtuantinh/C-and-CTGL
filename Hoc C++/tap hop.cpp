#include<iostream>
using namespace std;

int x[100], n, k, res, s, sum=0;

void Try(int i){
	for(int j=x[i-1]+1; j<=n-k+i; j++){
		x[i]=j;
		sum+=x[i];
		if(i==k){
			if(sum==s) res++;
		}
		else Try(i+1);
		sum-=x[i];
	}
}

int main(){
	while(cin>>n>>k>>s){
		if(k>n){
			cout<<0<<endl;
			continue;
		}
		if(n==0 && k==0 && s==0){
			break;
		}
		res=0;
		Try(1);
		cout<<res<<endl;
	}
	return 0;
}

