#include<bits/stdc++.h>
using namespace std;
int sang(int L,int R){
	int dem=0;
	vector <int> v(R+1,0);
	for(int i=2;i<=R;i++){
		if(v[i]==0){
			for(int j=i*2;j<=R;j+=i){
				v[j]=1;
			}
			if(i>=L) dem++;
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long L,R;
		cin>>L>>R;
		int k=sang(L,sqrt(R));
		cout<<k<<endl;
	}
	return 0;
}


