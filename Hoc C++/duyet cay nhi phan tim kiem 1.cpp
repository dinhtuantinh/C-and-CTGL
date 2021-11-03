#include<bits/stdc++.h>
using namespace std;

void findPost(int pre[], int n, int minval, int maxval, int &index){  
    if(index == n) 
        return; 
    if(pre[index] < minval || pre[index] > maxval){ 
        return; 
    }  
    int val = pre[index]; 
    index++; 
    findPost(pre, n, minval, val, index);  
    findPost(pre, n, val, maxval, index); 
    cout<<val<<" "; 
} 

void postOrder(int pre[], int n){ 
	int index = 0; 
    findPost(pre, n, INT_MIN, INT_MAX, index); 
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
		postOrder(pre, n);
		cout<<endl;
	}
	return 0;
}

