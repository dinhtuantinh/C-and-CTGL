#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void kt(){
	bool kt=true;
		int n;
		cin>>n;
		vector<int > a(n),b(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b.begin(),b.end());
		for(int i=0;i<n;i++){
			if(a[i]!=b[n-i-1]&&b[i]!=a[i]){
				kt=false;
				break;
			}
		}
		if(kt==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		kt();
	}
	return 0;
}

