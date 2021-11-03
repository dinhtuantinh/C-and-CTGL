#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream iff("inp.txt",ios::in);
	ofstream off("out.txt",ios::out);
	int T;
	iff>>T;
	while(T--){
		long n, k;
		cin>>n>>k;
		long a[n];
		for(long i=0;i<n;i++){
			cin>>a[i];
		}
		map<int,int>mp;
		for(long i=0;i<n;i++){
			mp[a[i]]++;
		}
		sort(a,a+n);
		long dem=0;
		for(long i=0;i<n;i++){
			for(long j=0;j<i;j++){
				if(a[i]-a[j]<k) dem++;
			}
		}
		map<int,int>::iterator it;
		for(it=mp.begin();it != mp.end();++it){
			if(it->second>2){
				while(it->second>1){
					dem--;
					it->second--;
				}
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}


