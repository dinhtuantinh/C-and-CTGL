#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
		long long n;
		cin>>n;
		long long a[n],i,j,m,c,b[n],x=0,y=0;
		for(i=1;i<=n;i++){
			cin>>m;
			if(i%2==0){
				a[x]=m;
				x++;
			}
			else{
				b[y]=m;
				y++;
			}
		}
		for( i = 1; i <=x - 1; i++){
	        for(j = i + 1; j <=x; j++){
	            if(a[i] < a[j]){
	                long long tg = a[i];
	                a[i] = a[j];
	                a[j] = tg;        
	            }
	        }
   		}
		sort(b,b+y);
		for(int i=1;i<=n;i++){
			if(i%2==0){
				cout<<b[y]<<" ";y--;
			}
			else{
				cout<<a[x]<<" ";x--;
			}
		}
	return 0;
}

