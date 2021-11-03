#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
bool kt(string s){
	int d0=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='0') {d0++; break;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='1') {
			d1++; break;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='2') {d2++; break;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='3') {d3++; break;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='4') {d4++; break;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='5') {d5++; break;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='6') {d6++; break;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='7') {d7++; break;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='8') {d8++; break;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='9') {d9++; break;
		}
	}
	if(d0+d1+d2+d3+d4+d5+d6+d7+d8+d9==10) return true;
	else return false;
}
bool kt2(string s){
	for(int i=0;i<s.size();i++){
			if(s[0]=='0'||s[i]>'9'||s[i]<'0') return false;
			
		}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(kt2(s)){
			if(kt(s)) cout<<"YES";
			else cout<<"NO";
		}
		else cout<<"INVALID";
		cout<<endl;
	}
	return 0;
}

