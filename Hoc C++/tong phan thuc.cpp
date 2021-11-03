#include<bits/stdc++.h>
using namespace std;
int main(){ 
	int t;cin>>t;
	while(t--){
		int a; 
		float b=0; 
		scanf ("%d",&a); 
		for (float i=1;i<=a;i++) { 
			b=b+(1/i); 
		} 
		printf ("%.4f",b); 
		cout<<endl;
	}
}
