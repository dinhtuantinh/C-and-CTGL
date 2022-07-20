#include <bits/stdc++.h>

using namespace std;

void Try(int n, int x,int k,int c,int a[]);
int main()
{
	int t;
	cin >> t;
	while (t--){
		int n,k;
	    cin >>n >>k;
	    int a[n];
	    int c=0;
        Try(n,1,k,c,a);
	}
	return 0;
}
void Try(int n, int x,int k,int c,int a[]){
	for (int i=0; i<=1; i++){
 		a[x]=i;
		if (a[x]==1){
			c++;
		}
		if (x==n){
			if (c==k){
				for (int i=1; i<=n; i++){
        			cout << a[i];
				}
			}
			cout << endl;
		}
		else
            Try(n,x+1,k,c,a);
	}
	c--;
}
