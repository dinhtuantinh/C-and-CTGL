#include<iostream>
#include<math.h>
int b[1000001];
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		for(int i=1;i<n-1;i++){
			for(int j=i;j<n;j++){
				if(abs(b[i]-b[j])<k){
					k=abs(b[i]-b[j]);
				} 
			}
		}
		cout<<endl;
	}
	return 0;
}


