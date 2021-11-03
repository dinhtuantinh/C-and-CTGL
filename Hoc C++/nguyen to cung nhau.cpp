#include<bits/stdc++.h>

using namespace std;
int NTCN(int a,int b)
{
	int m;
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	if(a==1){
		return 1;
	}
	else{
		return 0;
	} 
}
int NT(int a){
	if(a<2) return 0;
	if(a==2) return 1;
	if(a>2){
		for(int i=2;i<=sqrt(a);i++){
			if(a%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int x,t=0;
		cin>>x;
		for(int i=1;i<=x;i++){
			if(NTCN(i,x)==1){
				t++;
			}
		}
		if(NT(t)==1){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		cout<<endl;
	}
	
	return 0;
}


