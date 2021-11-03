#include<bits/stdc++.h>
using namespace std;

int res=0;

bool isLeaf(int pre[], int &i, int n, int min, int max){     
    if(i >= n) return false;   
    if(pre[i] > min && pre[i] < max) { 
        i++;   
        bool left = isLeaf(pre, i, n, min, pre[i-1]); 
        bool right = isLeaf(pre, i, n, pre[i-1], max); 
        if(!left && !right)  
            res++;      
        return true; 
    } 
    return false; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, i;
		cin>>n;
		int pre[n];
		for(i=0; i<n; i++)
			cin>>pre[i];
		i=0, res=0;
		isLeaf(pre, i, n, INT_MIN, INT_MAX); 
		cout<<n-res<<endl;
	}
	return 0;
}

