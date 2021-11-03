//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	long long t;
//	cin>>t;
//	cin.ignore();
//	while(t--){
//		long long start;
//		string s;
//		getline(cin,s);
//		long long i=s.size()-1;
//		string res="";
//		long long end=s.size();
//		while(i>=0){
//			if(s[i]==' '){
//				start=i+1;
//				while(start!=end){
//					res+=s[start++];
//				}
//				res+=" ";
//				end=i;
//			}
//			i--;
//		}
//		start=0;
//		while(start!=end){
//			res+=s[start++];
//		}
//		cout<<res<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string s;
		getline(cin,s);
		stack<string> res;
		s+=" ";
		string v=""; 
		for(int i=0;i<s.size();i++){
			if(s[i]==' '){
				res.push(v);
				v="";
			}
			else v+=s[i];
		}
		while(res.size()>0){
			cout<<res.top()<<" ";
			res.pop();
		}
		cout<<endl;
	}
	return 0;
}

