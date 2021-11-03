#include<bits/stdc++.h>
using namespace std;
int main(){
	string s, ans;
	getline(cin,s);
	for(int i=0; i<s.size(); i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]=s[i]+32;
		}
	}
	int i=0;
	while(i < s.length()){                 //chuan hoa xau 
    	bool ok = false;
   		string res;
   		while(s[i] != ' ' && i < s.length()){
   			res += s[i];
   			i++;
   			ok = true;
		}
		if(ok) ans = ans + res + ' ';
		i++;
	}
	ans[0]=ans[0]-32;                        //ki tu dau viet hoa
	for(int i=1; i<ans.size()-1; i++){
		if(ans[i]==' '){                    //cac ki tu sau khoang trang viet hoa{
			ans[i+1]=ans[i+1]-32;
		}
	}
	int k;
	for(int i=ans.size()-2; i>=0; i--){
		if(ans[i]==' '){
			k=i;
			break;
		}
	}
	for(int i=0; i<k; i++){
		cout<<ans[i];
	}
	cout<<", ";
	for(int i=k+1; i<ans.size()-1; i++){
		if(ans[i]>='a'&&ans[i]<='z'){
			ans[i]=ans[i]-32;	
		}cout<<ans[i];	
	}
    return 0;
}
