#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n, k;
int a[101],v[101];
vector<vector<int> > res;
void Quay_lui(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i!=n) Quay_lui(i+1);
		else{
			int s=0;
			for(int m=1;m<=n;m++){
				if(a[m]) s+=v[m];
			}
			if(s==k){
				vector<int> x;
				for(int m=1;m<=n;m++){
					if(a[m]) x.push_back(v[m]);
				}
				res.push_back(x);
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		res.clear();
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>v[i];
		}
		sort(v+1,v+n+1);
		Quay_lui(1);
		if(res.size()!=0){
			sort(res.begin(),res.end());
			for(int i=0;i<res.size();i++){
				cout<<"[";
				for(int j=0;j<res[i].size()-1;j++){
					cout<<res[i][j]<<" ";
				}
				cout<<res[i][res[i].size()-1]<<"] ";
			}
			cout<<"\n";
		}
		else{
			cout<<-1<<"\n";
		}
	}
	return 0;
}

