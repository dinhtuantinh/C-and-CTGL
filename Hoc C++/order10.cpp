//#include<bits/stdc++.h>
//using namespace std;
//int day(int arr[],int n){
//	int day[n];
//	day[0]=1;
//	for(int i=1;i<n;i++){
//		day[i]=1;
//		for(int j=0;j<i;j++){
//			if(arr[i]>arr[j]&&day[i]<day[j]+1)
//				day[i]=day[j]+1;
//		}
//	}
//	return *max_element(day,day+n);
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		int a[n];
//		for(int i=0;i<n;i++){
//			cin>>a[i];
//		}
//		cout<<day(a,n)<<endl;
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int day(int a[],int n){
//	int day[n];
//	day[0]=1;
//	for(int i=1;i<n;i++){
//		day[i]=1;
//		for(int j=0;j<i;j++){
//			if(a[i]>a[j]&&day[i]<day[j]+1){
//				day[i]=day[j]+1;
//			}
//		}
//	}
//	return *max_element(day,day+n);
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		int a[n];
//		for(int i=0;i<n;i++){
//			cin>>a[i];
//		}	
//		cout<<day(a,n)<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int day(int a[],int n){
	int day[n];
	day[0]=1;
	for(int i=1;i<n;i++){
		day[i]=1;
		for(int j=0;j<i;j++){
			if(a[i]>a[j]&&day[i]<day[j]+1){
				day[i]=day[j]+1;
			}
		}
	}
	return *max_element(day,day+n);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<day(a,n)<<endl;
	}
	return 0;
}






















