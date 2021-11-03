#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
bool f[5003][5003];
 
void solve(){
    ll t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        
        ll n = s.length();
        for(ll i = 0; i<n; i++){
            f[i][i] = 1;
            f[min(i+1, n-1)][i] = 1;
        }
        ll lmax = 1;
        for(ll k = 1; k<=n-1; k++){
            for(ll i = 0; i<n; i++){
                ll j = i+k;
                f[i][j] = (f[i+1][j-1] && s[i] == s[j]);
                if(f[i][j]){
                    lmax = max(lmax, j-i+1);
                }
            }
        }
        cout << lmax << endl;
    }
}
 
void fastIO(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}
 
int main(){
    fastIO();
    solve();
    return 0;
}
