#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
//void slove(int *a,int n){
//	int res[n]={};
//	res[n-1]=-1;
//	stack<int> s;
//	s.push(a[n-1]);
//	for(int i=n-1;i>=0;i--){
//		while(!s.empty()&&a[i]>=s.top()){
//			s.pop();
//		}
//		if(s.empty()) res[i]=-1;
//		else res[i]=s.top();
//		s.push(a[i]);
//	}
//	for(int i=0;i<n;i++){
//		cout<<res[i]<<" ";
//	}
//	cout<<endl;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;cin>>n;
//		int *a=new int[n];
//		for(int i=0;i<n;i++){
//			cin>>a[i];	
//		}
//		slove(a,n);
//	}
//	return 0;
//}
int a[100005];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		stack<int> stk;
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector<int> kq;
		for(int i=n-1;i>=0;i--){
			bool check=false;
			while(stk.size()>0){
				int top=stk.top();
				if(top>a[i]){
					kq.push_back(top);
					check=true;
					break;
				}
				else stk.pop();
			}
			if(check==false) kq.push_back(-1);
			stk.push(a[i]);
		}
		reverse(kq.begin(),kq.end());
		for(int i=0;i<kq.size();i++){
			cout<<kq[i]<<" ";
		}
	}
}
