#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
void kiem_tra(long long arr1[],long long arr2[],long long arr3[],long long n1,long long n2,long long n3)
{
	long long i=0, j=0, k=0;
	int dem=1;
	while(i<n1&&j<n2&&k<n3)
	{
		if(arr1[i]==arr2[j]&&arr2[j]==arr3[k])
		{
			cout<<arr1[i]<<" ";
			i++;
			j++;
			k++;
			dem=0;
		}
		else if(arr1[i]<arr2[j])
		{
			i++;
		}
		else if(arr2[j]<arr3[k])
		{
			j++;
		}
		else
		{
			k++;
		}
	}
	if(dem==1) cout<<"-1";
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n1,n2,n3;
		cin>>n1>>n2>>n3;
		long long a[n1],b[n2],c[n3];
		for(long long i=0;i<n1;i++){
			cin>>a[i];
		}
		for(long long i=0;i<n1;i++){
			cin>>b[i];
		}
		for(long long i=0;i<n1;i++){
			cin>>c[i];
		}
		kiem_tra(a,b,c,n1,n2,n3);
		cout<<endl;
	}	
	return 0;
}
