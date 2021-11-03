#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int i=n-1;
		while(i>0&&a[i]>a[i+1]) i--;
		if(i<=0){
			for(int i=1;i<=n;i++){
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else{
			int k=n;
			while(a[i]>a[k]) k--;
			swap(a[i],a[k]);
			int left=i+1,right=n;
			while(left<right){
				swap(a[left],a[right]);
				left++;right--;
			}
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

