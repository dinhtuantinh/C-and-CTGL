#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       vector<int> a(n);
       for(auto& i:a) cin>>i;
       int tmp,count=0;
       bool done=false;
       for(int i=0;i<n-1;++i){
           tmp=i;
           done=false;
           for(int j=i+1;j<n;++j){
               if(a[j]<a[tmp]){
                   tmp=j;
                   done=1;
               }}
               if(done) ++count;
               swap(a[tmp],a[i]);
           
       }
        cout<<count<<"\n";
    }
    
}
