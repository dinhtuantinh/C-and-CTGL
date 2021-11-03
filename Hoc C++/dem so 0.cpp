#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int A[n];
		for(int i=1;i<=n;i++){
			cin>>A[i];
		}
		int left=1,right=n;
		int dem=0;//so chu so 0
		while(left<=right&&A[left]==0){
			int mid = (left+right)/2;
			if(A[mid]==0){
				dem+=mid-left+1;
				left=mid+1;
			}
			else{
				right=mid-1;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}

