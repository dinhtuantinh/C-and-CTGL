//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//bool Mountain(int a[], int L, int R)
//{
//	int i;
//	if((L-R)==1) return false;
//	for(i=L;i<(L+R)/2;i++){
//		if(a[i]>a[i+1]) return false;
//	}
//	for(i=R;i>(L+R)/2;i--){
//		if(a[i]>a[i-1]) return false;
//	}
//	return true;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n,L,R;
//		cin>>n;
//		int a[n],i;
//		for(int i=0; i<n; i++) cin>>a[i];
//		//int dem=0;
//		cin>>L>>R;
//		if(Mountain(a,L,R)==true) cout<<"Yes"<<endl;
//		else cout<<"No"<<endl;
//		
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
bool nui(int a[],int n,int L,int R){
	if((R-L)==1) return false;
	for(int i=L;i<(L+R)/2;i++){
		if(a[i]>a[i+1]) return false;
	}
	for(int i=R;i>(L+R)/2;i--){
		if(a[i]>a[i-1]) return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int L,R;
		cin>>L>>R;
		if(nui(a,n,L,R)==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}






















