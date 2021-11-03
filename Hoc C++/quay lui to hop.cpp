#include<bits/stdc++.h>
using namespace std;
int a[101];
int n, k;
bool check[100] ;
void init(){
    for(int i=1;i<=k;i++)
        a[i] = i;
}
 
 
void Try(int i)
{
	for(int j=a[i-1] + 1;j<=n-k+i;j++)
	{
 
		if(check[j]==false)
		{	
            a[i] = j;
			check[j] = true;
			if(i == k)
			{
				for(int l=1; l<= k; l++ )
				{
					cout<<a[l];
				}
                cout << " ";
			} else Try(i+1);
            check[j]=false;
		}
 
 
	}
}
int main(){
	int t;cin>>t;
	while(t--)
	{
		cin >> n >> k;
        init();
		Try(1);
		cout<<endl;
	}
 
return 0;
}///, 20, 21, 22, 23, 24
