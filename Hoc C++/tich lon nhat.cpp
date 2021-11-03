#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve(){
    long long n;
    bool have0 = false;
    vector<long long> pos, neg;
    cin >> n;
    for(int i = 0; i<n; i++){
        long long tmp; cin >> tmp;
        if(tmp < 0) neg.push_back(tmp);
        if(tmp > 0) pos.push_back(tmp);
        if(tmp == 0) have0 = true;
    }
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end(), greater<long long>());
    long long res = LONG_LONG_MIN;
    if(pos.size() > 1){
        res = pos[0];
        for(int i = 1; i<min((int) pos.size(), 3); i++) res *= pos[i];
    } 
    if(!neg.empty()){
        res = max(res, neg[neg.size()-1]);
        if(!pos.empty()) res = max(res, neg[neg.size()-1]*pos[pos.size()-1]);
    }
    if(neg.size() >= 2){
        res = max(res, neg[0]*neg[1]);
        if(!pos.empty()) res = max(res, neg[0]*neg[1]*pos[0]);
    }
    if(have0) res = max(res, 0LL);
    cout << res;
}

void fastIO(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
    fastIO();
    int t = 1; //cin >> t; 
    while(t--) solve();
    return 0;
}
