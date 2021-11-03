#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void slove();
int main(){
	int t;
	cin>>t;
	while(t--){
		slove();
		cout<<endl;
	}
	return 0;
}
void slove(){
		int n;
		cin>>n;
		vector<int> a(n);
		int kq=n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		for(int i=n/2-1,j=n-1;i>=0&&j>=n/2;){
			if(a[j]<2*a[i]){
				i--;
			}
			else{
				kq--;
				i--;
				j--;
			}
		}
		cout<<kq;
}
