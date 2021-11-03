#include<bits/stdc++.h>
using namespace std;
 
// vector<int> Split(string s){
 
// 	vector< int > k;
 
// 	return k;
// }
 
int main(){
 
	int n;
	cin >> n;
	cin.ignore();
	vector< int> ke[n+1];
	for(int i=1;i<=n;i++){
		string s;
		getline(cin, s);
		s += " ";
		// vector< int> a = Split(s);
		// "14 2  4"
		int so=0;
		for(int j=0;j<s.size();j++){
			if(s[j] == ' '){
				if(so > 0)
					ke[i].push_back(so);
				so = 0;
			}
			else {
				so = 10*so + int(s[j] - '0');
			}
		}
 
	}
 
	int check[10000] = {0};
	vector< pair<int, int > > q;
	for(int i = 1; i <= n ; i ++ ){
		check[i] = true;
		for(int j = 0 ; j < ke[i].size(); j++)
			if(check[ke[i][j]] == false){
				q.push_back({i, ke[i][j]});
			}
	}
 
	sort(q.begin(), q.end());
	for(int i = 0 ; i < q.size() ; i ++ )
		cout << q[i].first << ' ' << q[i].second <<endl;
 
 
}
 
