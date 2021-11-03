#include<bits/stdc++.h>
using namespace std;

int valueOf(string s){
	return ((s[0]-'0')*1000 + (s[1]-'0')*100 + (s[2]-'0')*10 + (s[3]-'0'));
}

vector<bool> sieve(){
	vector<bool> mark(10000, true);
	mark[0]=mark[1]=false;
	for(int i=2; i*i<10000; i++){
		if(mark[i]){
			for(int j=i*i; j<10000; j+=i)
				mark[j]=false;
		}
	}
	return mark;
}

vector<bool> isPrime = sieve();

int solve(string s, string e){
	set<string> visit;
	queue<pair<string, int> > res;
	res.push(pair<string, int>(s,0));
	visit.insert(s);
	while(!res.empty()){
		pair<string, int> t = res.front();
		res.pop();
		if(t.first == e)	return t.second;
		for(int i=0; i<4; i++){
			string tmp=t.first;
			for(int j=0; j<10; j++){
				if(i==0 && j==0) continue;
				tmp[i]='0'+j;
				if(isPrime[valueOf(tmp)] && visit.find(tmp) == visit.end()){
					res.push(pair<string, int> (tmp, t.second + 1));
					visit.insert(tmp);
				}
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s, e;
		cin>>s>>e;
		cout<<solve(s, e)<<endl;
	}
	return 0;
}

