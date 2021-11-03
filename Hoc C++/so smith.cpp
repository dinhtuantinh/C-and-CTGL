#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
//int kt(long long n){
//	if(n<2) return 0;
//	for(long long i=2;i<=sqrt(n);i++){
//		if(n%i==0){
//			return 0;
//		}
//	}
//	return 1;
//}
int tong(int n){
	int s1=0;
	while(n>0){
		s1+=n%10;
		n/=10;
	}
	return s1;
}
int main(){
		long long n;
		cin>>n;
		long long k=n;
		long long res=0,s=0, i=2;
		while(n>=2){
			//dem=0;
			if(n%i==0){
				//res+=i;
				int a=0;
				while(n%i==0&&n>=2){
					a++;
					n/=i;
				}
				//cout<<dem<<endl;
				res=res+tong(i)*a;
			}	
			i++;
		}
		while(k>0){
			s+=k%10;
			k/=10;
		}
		//if(n>1) res+=n;
		
		if(res==s) cout<<"YES";
		else cout<<"NO";
	//}
	return 0;
}

