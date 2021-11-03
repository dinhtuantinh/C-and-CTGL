#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
 
/***********HuyNguyen*****************/
i64 const N = 50;
 
i64 dp[N][N];
i64 n;
i64 fractor(i64 n){
	i64 ans = 1;
	for(i64 i = 1; i <= n; i++) ans *= i;
}
i64 Try(vector<i64>&v){
	i64 x = 0, y = 0;
	for(i64 i = 0; i < v.size(); i++){
		if(v[i] == 1) x++;
		else if(v[i] == 2) y++;
	}
	if(dp[x][y]) return dp[x][y];
 
	vector<i64> cnt(v.size() + 5, 0);
	for(i64 i = 0; i < v.size(); i++){
		if(v[i] > 0){
			vector<i64> vv = v;
			if(v[i] == 1) vv[i] = 0;
			else if(v[i] == 2) vv[i] = 1;
			if(cnt[v[i]] == 0){
				cnt[v[i]] = 1;
				dp[x][y] += Try(vv);
			}
 
		}
	}
	return dp[x][y];
 
}
void TestCase(){
	memset(dp, 0, sizeof(dp));
	dp[0][0] = 1;
	cin >> n;
	vector<i64> v;
	for(i64 i = 0; i < n; i++){
		v.push_back(2);
	}
	Try(v);
	cout << dp[0][n] << '\n';
}
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int T = 1; cin >> T;
	while(T--){
		TestCase();
	}
}
