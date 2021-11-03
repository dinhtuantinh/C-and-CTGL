#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+1],b[m+1], f[n+2], g[m+2];
 
        for(int i=0;i<=n+1;i++) f[i] = 0;
        for(int i=0;i<=m+1;i++) g[i] = 0;
        for(int i=1;i<=n;i++){ 
			cin>>a[i];
            f[i] = a[i] + f[i-1];
        }
        for(int i=1;i<=m;i++) cin>>b[i];
        for (int i = m; i>=1; i--){
            // cin>>b[i];
            g[i] = b[i] + g[i+1]; 
        }
        int ans = INT_MIN;
        for(int i=1;i<=n;i++){
            for(int j=m;j>i;j--){
                ans = max(ans,f[i]+g[j]);
            }
        }
        
        
        for(int i=0;i<=n+1;i++) f[i] = 0;
        for(int i=0;i<=m+1;i++) g[i] = 0;
        for(int i=n;i>=1;i--){ 
            f[i] = a[i] + f[i+1];
        }
        for(int i=1;i<=m;i++){ 
            g[i] = b[i] + g[i-1];
        }
        
        for(int i=1;i<=m;i++){
            for(int j=n;j>i;j--){
                ans = max(ans,g[i]+f[j]);
            }
        }
        ans = max(ans, max(g[m],f[1]) );
        cout<<ans<<'\n';
    }
}
