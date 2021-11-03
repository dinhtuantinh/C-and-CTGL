#include<bits/stdc++.h>
using namespace std;

bool isLeaf(int pre[], int &i, int n, int min, int max){     
    if(i >= n) return false;   
    if(pre[i] > min && pre[i] < max) { 
        i++;   
        bool left = isLeaf(pre, i, n, min, pre[i-1]); 
        bool right = isLeaf(pre, i, n, pre[i-1], max); 
        if(!left && !right)  
            cout<<pre[i-1]<<" ";      
        return true; 
    } 
    return false; 
} 
  
void printLeaves(int pre[],  int n){ 
    int i=0;     
    isLeaf(pre, i, n, INT_MIN, INT_MAX); 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int pre[n];
		for(int i=0; i<n; i++)
			cin>>pre[i];
		printLeaves(pre, n);
		cout<<endl;
	}
	return 0;
}

