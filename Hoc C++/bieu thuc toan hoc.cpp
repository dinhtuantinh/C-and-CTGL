#include<bits/stdc++.h>
using namespace std;

int x[10], b[10];
bool visited[10];
bool ok;

void Try(int j, int res){
	if(res==23 && j==5){
		ok=true;
	}
	for(int k=1; k<=3; k++){
		if(j<5 && k==1){
			Try(j+1, res+x[b[j+1]]);
		}
		if(j<5 && k==2){
			Try(j+1, res-x[b[j+1]]);
		}
		if(j<5 && k==3){
			Try(j+1, res*x[b[j+1]]);
		}
	}
}

void Try_hoanvi(int i){
	for(int j=1; j<=5; j++){
		if(!visited[j]){
			b[i] = j;
			visited[j] = true;
			if(i==5){
				Try(1, x[b[1]]);
			}
			else Try_hoanvi(i+1);
			visited[j] = false;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int j=1; j<=5; j++) cin>>x[j];
		ok=false;
		Try_hoanvi(1);
		if(!ok) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
	return 0;
}

