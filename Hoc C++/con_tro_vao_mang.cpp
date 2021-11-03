#include<bits/stdc++.h>

using namespace std;

int main(){
/*	int *p;
	int n;
	cin>>n;
	p = new int;
	for(int i=0; i<n; i++){
		cin>>*(p+i);
	}
	for(int i=0; i<n; i++){
		cout<<*(p+i)<<"\t";
	}*/
	
	/*int n;
	vector <int> v(n+1,0);
	cin >> n;
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	for(int i=0; i<n; i++){
		cout << v[i]<<"\t";
	}*/
	int n;
	cin>>n;
	int *(*p);
	p=new int*[n];
	//for(int i=0; i<n; i++){
	//	*(p+i)=new int[n];
	//}
	for(int i=0; i<n; i++){
		*(p+i)=new int[n];
		for(int j=0; j<n; j++){
			
			cin>>*(*(p+i)+j);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<*(*(p+i)+j)<<" ";
		}cout<<endl;
	}
	return 0;
}


