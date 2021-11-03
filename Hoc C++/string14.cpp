#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    
    cin>>t;
    while(t--)
	{
    	cin.ignore();
    	string s;
    	string ans;
    	getline(cin , s);
    	
    	int i = 0;
    	
    	while(i < s.length()){
    		bool ok = false;
    		string res;
    		while(s[i] != ' ' && i < s.length()&&s[i]!='\t')
			{
    			res += s[i];
    			i++;
    			ok = true;
			}
			if(ok) ans = ans + res + ' ';
			i++;
		}
		for(int i=0; i<s.length(); i++)
		{
    		if(s[i]=='\t')
    		{
    			for(int j=i; j<s.length(); j++){
    				s[j]=s[j+1];
    				s[s.length()]='\0';
    				i--;
				}
			}
		}
		int dem=0;
		for(int i=0; i<ans.length(); i++)
		{
			if(ans[i]==' ') dem++;
		} 
		
		cout << dem << endl;
	}
    return 0;
}
