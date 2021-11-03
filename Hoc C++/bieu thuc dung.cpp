#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<int> index;
		int c=0;
		for(int i=0; s[i]; i++)
			if(s[i]=='[') index.push_back(i);
		int p=0, res=0;
		for(int i=0; s[i]; i++){
			if(s[i]=='['){
				c++;
				p++;
			}
			else c--;
			if(c<0){
				res+= index[p]-i;
				swap(s[index[p]], s[i]);
				p++;
				c=1;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
