#include<bits/stdc++.h>

using namespace std;
void mang_nho_hon_K(long n,long k,long long a[],long long nho[], long &dem_nho){
	dem_nho=0;
	for(long i=0;i<n;i++)
	{
		if(a[i]<=k) nho[dem_nho++] = a[i];
	}
}
void mang_lon_hon_K(long n,long k,long long a[],long long lon[], long &dem_lon)
{
	dem_lon=0;
	for(long i=0;i<n;i++)
	{
		if(a[i]>k) lon[dem_lon++] = a[i];
	}
}
void mang_KQ(long n, long long a[],long long nho[], long long lon[], long dem_nho,long dem_lon)
{
	for(long i=0;i<dem_nho;i++)
	{
		a[i]=nho[i];
	}
	for(long i=dem_nho;i<n;i++)
	{
		a[i]=lon[--dem_lon];
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,dem_nho,dem_lon,k;
		cin>>n>>k;
		long long a[n], nho[n], lon[n];
		for(long i=0;i<n;i++)
		{
			cin>>a[i];
		}
		mang_nho_hon_K(n,k,a,nho,dem_nho);
		mang_lon_hon_K(n,k,a,lon,dem_lon);
		mang_KQ(n,a,nho,lon,dem_nho,dem_lon);
		for(long i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


