//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		string s;
//		cin>>s;
//		int k;
//		cin>>k;
//		int cnt[1000];//mang danh dau
//		int count=0;int res=0;
//		for(int i=0;i<s.size();i++){
//			memset(cnt,0,sizeof(cnt));
//			count=0;
//			for(int j=i;j<s.size();j++){
//				if(cnt[s[j]-'a']==0){
//					count++;
//				}
//				cnt[s[j]-'a']++;
//				if(count==k) res++;
//				else if(count>k){
//					break;//continue;
//				}
//			}
//		}
//		cout<<res<<endl;
//	}
//	return 0;
//}
//
#include <bits/stdc++.h>
using namespace std;
string a[100];
int n,stop=0;
void Nhap(){
    cin>>n;
    for(int i=1;i<=n;i++) a[i]='A';
}
void out(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<" ";
}
void Sinh(){
    size() i=n;
    while(a[i]){
        a[i]='A';
        i--;
    }
    if(i==0) stop=1;
    else a[i]='B';
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        Nhap();
        while(!stop){
           out();
           Sinh();
    }
    stop=0;
    cout<<endl;
    }
} 
