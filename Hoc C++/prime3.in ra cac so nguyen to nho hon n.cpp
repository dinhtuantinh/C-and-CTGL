#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*int Snt(int n){
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
		
	}
	return 1;
}
 main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i<=n;i++){
			if(Snt(i)==1){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
*/

//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		int a[n+5];
//		for(int i=1;i<=n;i++) a[i]=0;
//		for(int i=2;i<=n;i++){
//			if(a[i]==0){
//				for(int j=i*2;j<=n;j+=i){
//					a[j]=1;
//					
//				}cout<<i<<"\t";
//			}	
//		
//		}
//		cout<<endl;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		int a[n+5];
//		for(int i=1;i<=n;i++){
//			a[i]=0;
//		}
//		for(int i=2;i<=n;i++){
//			if(a[i]==0){
//				for(int j=i*2;j<=n;j+=i){
//					a[j]=1;
//				}
//				cout<<i<<" ";
//			}
//		}
//		cout<<endl;
//		
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=1;i<=n;i++){
			a[i]=0;
		}
		for(int i=2;i<=n;i++){
			if(a[i]==0){
				for(int j=i*2;j<=n;j+=i){
					a[j]=1;
				}
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}






















