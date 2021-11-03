#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		printf("%.4lf",(sqrt((a-c)*(a-c)+(b-d)*(b-d))));
		cout<<endl;
	}
	return 0;
}

