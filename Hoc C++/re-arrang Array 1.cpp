//#include <iostream>
//#define MAX 100
//using namespace std;
//void nhapmang(long long A[], long long n)
//{
//	for(long long i=0;i<n; i++)
//		cin>>A[i];
//}
//
//int main()
//{
//	short t;
//	cin>>t;
//	while(t--)
//	{
//		long long A[MAX];
//		long long B[MAX];
//		long long n;
//		cin>>n;
//		nhapmang(A, n);
//		for(long long i=0; i<n; i++)
//		{
//			for(long long j=0; j<n; j++)
//			{
//				if(i==A[j])
//				{
//					B[i]=i;
//					break;
//				}
//				else
//					B[i]=-1;
//			}
//			
//		}
//		for(long long i=0; i<n;i++)
//			cout<<B[i]<<" ";
//		cout<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long A[MAX];
		long long B[MAX];
		long long n;
		cin>>n;
		for(long long i=0;i<n;i++){
			cin>>A[i];
		}
		for(long long i=0;i<n;i++){
			for(long long j=0;j<n;j++){
				if(i==A[j]){
					B[i]=i;
					break;
				}
				else{
					B[i]=-1;
				}
			}
		}
		for(long long i=0;i<n;i++){
			cout<<B[i]<<" ";
		}
		cout<<endl;
	}
}
