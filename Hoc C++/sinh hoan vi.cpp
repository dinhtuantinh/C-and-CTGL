#include <bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
 
int a[100],n,stop=0;
void Sinh(){
	int i=n-1;
	while(i>0&&a[i]>a[i+1]) i--;
	if(i==0) stop=1;
	else{
		int j=n;
		while(a[j]<a[i]) j--;
		swap(a[i],a[j]);
        int x=i+1,y=n;
		while(x<y){
			swap(a[x],a[y]);
			x++;y--;
		}
	}
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
	    for(int i=1;i<=n;i++){
	    	a[i]=i;
		}
	    while(!stop){
	    	for(int i=1;i<=n;i++){
	    		cout<<a[i];
			} 
			cout<<" ";
	    	Sinh();
		}
		cout<<endl;
		stop=0;
	}
 
return 0;
}
