#include <bits/stdc++.h>
using namespace std;
int kt(){
    int n;
    cin >> n;
    vector <long long> v(n);
    long long val;
    for (int i=0; i<n; i++){
       cin >> v[i];
       v[i]=v[i]*v[i];
    }
    sort(v.begin(), v.end());
    for (int i=n-1; i>=2; i--){
        int left=0, right=i-1;
        while(left<right){
            if (v[left]+v[right]==v[i]) return 1;
            else if (v[left]+v[right]>v[i]) right--;
            else left++;
        }
    } 
    return 0;
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        int c=kt();
        if (c==0) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}
