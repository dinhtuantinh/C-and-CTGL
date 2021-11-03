#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int s, d;
		cin>>s>>d;
		stack<int> digits;
		for(int i=1; i<=d; i++){
			if(s>9){
				digits.push(9);
				s-=9;
			}
			else if(i==d){
				digits.push(s);
				s=0;
			}
			else if(s==1){
				if(i!=d) digits.push(0);
			}
			else{
				digits.push(s-1);
				s=1;
			}
		}
		if(s>0) cout<<-1;
		else while(!digits.empty()){
			cout<<digits.top();
			digits.pop();
		}
		cout<<endl;
	}
	return 0;
}
