#include<bits/stdc++.h>

using namespace std;
const int oo=300;
bool kiemtra(string s1,string res){
	map<char,int>maps1,mapres;
	for(int i=0;i<s1.size();i++) maps1[s1[i]]++;
	for(int i=0;i<res.size();i++) mapres[res[i]]++;
	for(map<char,int>::iterator it=mapres.begin();it!=mapres.end();it++){
		if(maps1[it->first]<mapres[it->first]) return false;
	}
	return true;
}
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		set<char>st;
		for(int i=0;i<s.length();i++){
			st.insert(s[i]);
		}
		string s1(st.begin(),st.end());
		int MIN=s.size();
		for(int i=0;i<s.size();i++){
			string res="";
			int kt=0;
			for(int j=i;j<s.size();j++){
				res.push_back(s[j]);
				if(kiemtra(res,s1)&&res.size()<MIN){
					MIN=res.size();
				}
			}
		}
		cout<<MIN<<endl;
	}
	return 0;
}


