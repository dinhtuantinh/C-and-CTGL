#include<bits/stdc++.h>
using namespace std;

int i, stop = 0, n, x[20], val;
int a[20][20];

void Sinh(){
	i = n - 1;
	while(x[i] > x[i+1]){
		i--;
	}
	if(i <= 0){
		stop = 1;
	}
	else{
		int k = n;
		while(x[k] < x[i]){
			k--;
		}	
		swap(x[i], x[k]);
		i++; k = n;
		while(i <= k){
			swap(x[i], x[k]);
			i++; k--;
		}
	}
}

int sum(){
	int res = 0;
	for(int j = 1; j <= n; j++){
		res += a[j][x[j]];
	}
	return res;
}

int main(){
	int count = 0;
	cin>>n>>val;
	vector<vector<int> > res;
	for(int r = 1; r <= n; r++)
		for(int c = 1; c <= n; c++)
			cin>>a[r][c];
	stop = 0;
	for(int j = 1; j <= n; j++) x[j]=j;
	while(!stop){
		if(sum() == val){
			res.resize(res.size()+1);
			for(int j = 1; j<=n; j++)
				res[count].push_back(x[j]);
			count++;
		}
		Sinh();
	}
	cout<<count<<endl;
	for(int r = 0; r < res.size(); r++){
		for(int c = 0; c < res[r].size(); c++)
			cout<<res[r][c]<<" ";
		cout<<endl;
	}	
	return 0;
}

