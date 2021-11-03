#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long long n,x;
		cin >> n >> x;
		long long a[n];
		
		for(long long i=0; i<n; i++)
		{
			cin>>a[i];
		}
		long long tmp[n];
		for(long long i=0; i<n; i++)
		{
			tmp[i]=abs(x-a[i]);
		}
		for(long long i=0; i<n-1; i++)
		{
			for(long long j=n-1; j>i; j-- )
			{
				if(tmp[j]<tmp[j-1])
				{
//					long long temp1=tmp[j];
//					tmp[j]=tmp[j - 1];
//					tmp[j - 1]=temp1;
//					long long temp2=a[j];
//					a[j]=a[j - 1];
//					a[j - 1]=temp2;
					swap(tmp[j],tmp[j-1]);
					swap(a[j],a[j-1]);
				}
			}
		}
		for(long long i=0; i<n; i++)
		{
			cout<<a[i]<<" ";
			
		}cout<<endl;
	}
	return 0;
}

//#include<stdio.h>
//#include<math.h>
// 
//int main(){
//	int T, m, n, x;
//	scanf("%d", &T);
//	for (int i=1; i<=T; i++){
//		scanf("%d%d", &n, &x);
//		int a[n];
//		for (int j=0; j<n; j++){
//			scanf("%d", &a[j]);
//		}
//		for (int j=0; j<=n-1; j++){
//			int i;
//		    i=0;
//			while (i<n-1){
//				if (abs(a[i]-x)>abs(a[i+1]-x)) {
//					m=a[i+1];
//					a[i+1]= a[i];
//					a[i]= m;	
//				}
//				i++;
//			}
//	    }   
//	    for (int i=0; i< n; i++){
//	    	printf("%d ", a[i]);
//		}
//		printf ("\n");
//	}
//}
