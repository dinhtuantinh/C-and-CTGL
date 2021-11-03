#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<int >x,y;
		for(int i=0;i<n;i++){
			if(a[i]%2!=0) y.push_back(a[i]);
			else x.push_back(a[i]);
		} 
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		int k=1;
		int p=x.size()-1;
		for(int i=0;i<n;i++){
			if(a[i]%2!=0){
				cout<<y[k]<<" ";
				k++;
			}
			else{
			  	cout<<x[p]<<" ";
				p--;	
			}
		}
	return 0;
}

