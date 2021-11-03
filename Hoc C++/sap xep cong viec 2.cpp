#include<bits/stdc++.h>
using namespace std;

struct work{
	int d;
	int p;
};

bool cmp(work a, work b){
	if(a.p != b.p) return a.p>b.p;
	return a.d<b.d;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, num=0, res=0;
		cin>>n;
		work a[n];
		for(int i=0; i<n; i++){
			int x;
			cin>>x>>a[i].d>>a[i].p;
		}
		sort(a, a+n, cmp);
		bool check[n+1];
		memset(check, false, sizeof(check));
		for(int i=0; i<n; i++){
			for(int j = min(n, a[i].d)-1; j>=0; j--){
				if(check[j] == false){
					num++;
					res += a[i].p;
					check[j] = true;
					break;
				}
			}	
		}
		cout<<num<<" "<<res<<endl;
	}
	return 0;
}

