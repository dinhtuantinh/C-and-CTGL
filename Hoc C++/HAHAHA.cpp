#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
 vector<vector<int> > ans;
bool check(vector<int> a){
	if(a[0]==1 || a[n-1]==0) return false;
	for(int i=0;i<n-2;++i){
		if(a[i]==0 && a[i+1]==a[i]) return false;
	}
	return true;
}
void display(vector<int> a){
	for(int i=0;i<n;++i){
		if(a[i]==0) cout<<"H";
		else cout<<"A";
	}
	cout<<"\n";
}
void generate(vector<int> a,int idx){
	for(int i=0;i<2;++i){
		a[idx]=i;
		if(idx==n-1){
			if(check(a)) ans.push_back(a);}
		else generate(a,idx+1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin>>T;
	while(T--){
		cin>>n;
		vector<int> a(n);
		generate(a,0);
		sort(ans.begin(),ans.end());
		for(int i=ans.size()-1;i>-1;--i){
			if(check(ans[i])){
				display(ans[i]);
			}
		}
		ans.clear();
	}
}
