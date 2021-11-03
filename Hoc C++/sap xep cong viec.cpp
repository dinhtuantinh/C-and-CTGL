#include <bits/stdc++.h>
using namespace std;
int n;
struct dulieu{
	int fi,si;
};
dulieu X[1005];
bool cmp(dulieu a, dulieu b){
	return a.si<b.si;
}
int main() {
    int t;
    cin>>t;
    while(t--){
    	cin>>n;
    	for(int i=0;i<n;i++){
    		cin>>X[i].fi;
    		
		}
		for(int i=0;i<n;i++){
			cin>>X[i].si;
		}
		sort(X,X+n,cmp);
		int y=1,i=0;
		for(int j=1;j<n;j++){
			if(X[j].fi>=X[i].si){
				y++;
				i=j;
			}
		}
		cout<<y<<endl;
	}
    return 0;
}


