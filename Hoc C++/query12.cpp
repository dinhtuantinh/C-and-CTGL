//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		int a[n],b[n];
//		for(int i=0;i<n;i++){
//			cin>>a[i];
//		}
//		for(int i=0;i<n;i++){
//			cin>>b[i];
//		}
//		int max=1,k=0;
//		for(int i=0;i<n;i++){
//			int x=0,y=0;
//			for(int j=i;j<n;j++){
//				x+=a[j];
//				y+=b[j];
//				if(x==y) k=j-i+1;
//			}
//			if(k>max) max=k;
//		}
//		cout<<max;
//		cout<<endl;
//	}
//	return 0;
//}
//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int A1[n],A2[n];
		for(int i=0;i<n;i++){
			cin>>A1[i];
		}
		for(int i=0;i<n;i++){
			cin>>A2[i];
		}
		int max=0,k=0;
		for(int i=0;i<n;i++){
			int x=0,y=0;
			for(int j=i;j<n;j++){
				x+=A1[j];
				y+=A2[j];
				if(x==y) k=j-i+1;
			}
			if(k>max) max=k;
		}
		cout<<max<<endl;
	}
	return 0;
}






















