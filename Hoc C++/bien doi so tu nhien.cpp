#include<bits/stdc++.h>
using namespace std;

int solve(int n){
	set<int> visit;
	queue<pair<int, int> > res;
	res.push(pair<int, int>(n,0));
	visit.insert(n);
	while(!res.empty()){
		pair<int, int> t = res.front();
		res.pop();
		if(t.first == 1)	return t.second;
		if(t.first - 1 == 1)	return t.second + 1;
		if(visit.find(t.first - 1) == visit.end()){
			res.push(pair<int, int> (t.first - 1, t.second + 1));
			visit.insert(t.first - 1);
		}
		for(int i = 2; i*i <= (t.first); i++){
			if(t.first % i == 0){
				if(visit.find(t.first/i) == visit.end()){
					res.push(pair<int, int> (t.first/i, t.second + 1));
					visit.insert(t.first/i);
				}
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<solve(n)<<endl;
	}
	return 0;
}

