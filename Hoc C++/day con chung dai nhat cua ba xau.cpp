#include<bits/stdc++.h>
using namespace std;

int c[105][105][105];

int main(){
	int t;
	cin>>t;
	while(t--){
		int m, n, p;
		cin>>m>>n>>p;
		string x, y, z;
		cin>>x>>y>>z;
		x = "." + x;
		y = "." + y;
		z = "." + z;
		for(int i=1; i<=m; i++)
			for(int j=1; j<=n; j++)
				for(int k=1; k<=p; k++){
					if (i==0 || j==0 || k==0) 
                    	c[i][j][k] = 0;
					if(x[i] == y[j] && y[j] == z[k])
						c[i][j][k] = c[i-1][j-1][k-1]+1;
					else c[i][j][k] = max(max(c[i-1][j][k], c[i][j-1][k]), c[i][j][k-1]);
				}
		cout<<c[m][n][p]<<endl;	
	}
	return 0;
}

