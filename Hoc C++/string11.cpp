#include<bits/stdc++.h>

using namespace std;
bool subStr2ofstr1(string str1, string substr){
	map<char,int>mpstr1,mpsubstr;//khai bao 2 map
	for(int i=0;i<str1.length();i++) mpstr1[str1[i]]++;//dem so lan xuat hien cua tung ky tu trong str1
	for(int i=0;i<substr.length();i++) mpsubstr[substr[i]]++;//dem so lan xuat hien cua tung ky tu trong substr
	//map[key]=value
	for(map<char,int>::iterator it=mpsubstr.begin();it!=mpsubstr.end();it++){
		if(mpstr1[it->first]<mpsubstr[it->first]) return false;
	}
	return true;
}
int main(){
	cin.tie(0);ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		string str1,subStr;
		cin>>str1>>subStr;
		int MIN=150;//khai bao MIN > 100 la duoc, ta chon MIN = 150
		string ans;//chuoi ket qua
		bool check = false;
		for(int i=0;i<str1.length();i++){
			string res;
			for(int j=i;j<str1.length();j++){
				res.push_back(str1[j]);
				if(subStr2ofstr1(res,subStr)==true&&res.length()<MIN){
					MIN = res.size();//tim chuoi ans co do dai ngan nhat
					ans = res;//cap nhat lai chuoi ans
					check = true;//danh dau la ton tai ket qua bai toan
				}
			}
		}
		if(check==true) cout<<ans;
		else cout<<"-1";//neu ko ton tai thi in ra -1
		cout<<endl;
	}
	return 0;
}


