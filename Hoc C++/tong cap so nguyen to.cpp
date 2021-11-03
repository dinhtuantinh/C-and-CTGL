#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n<2) return false;
	//if(n==2) return true;
	if(n>=2){
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int N;
		cin>>N;
		int k;
		int check=0;
		for(int i=2;i<N-1;i++){
			if(snt(i)){
				k=N-i;
				if(snt(k)){
					cout<<i<<" "<<k;
					check++;
					break;
				}
			}
		}
		if(check==0){
			cout<<"-1";
		}
		cout<<endl;
		
	}
	return 0;
}
