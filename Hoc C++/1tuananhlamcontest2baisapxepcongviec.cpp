#include <bits/stdc++.h>
using namespace std;
int n;
struct file{
	int fi,si;
};
file X[1005];
bool ngan(file a, file b){
	return a.si<b.si;
}
int main() {
    int t;
    cin>>t;
    for(int test=t; test>0; test--){
    	cin>>n;
    	for(int i=0;i<n;i++){
    		cin>>X[i].fi;
    		
		}
		for(int i=0;i<n;i++)
			cin>>X[i].si;
		
		sort(X,X+n,ngan);
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


