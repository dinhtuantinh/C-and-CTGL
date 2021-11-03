#include<bits/stdc++.h>
//Dinh Tuan Anh 
// bai giai thuat tham lam.
using namespace std;

int main(){
	int t;
	cin>>t;
	vector<int>a,b;
	while(t--){
		int n;
		cin>>n;
		int M[n];
		bool ok=true;
		for(int i=0; i<n; i++){
			cin>>M[i];
			a.push_back(M[i]);
			b.push_back(M[i]);
		}
		sort(a.begin(), a.end());
		for(int i=0; i<n; i++){
			if(a[i]!=b[i]&&a[i]!=b[n-i-1]){
				ok=false;
				break;
			}
		}
		if(ok) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}

