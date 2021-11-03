#include<bits/stdc++.h>
using namespace std;
bool check(string top,int n){
	if(top.size()>n) return false;
	else 
		return true;
}
bool check2(string top){
	if((top.size())%2!=0) return false;
	string x="";
	for(int i=top.size()-1;i>=0;i--){
		x+=top[i];
	}
	if(top!=x) return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		queue<string>q;
		queue<string>kq;
		int n;
		cin>>n;
		q.push("6");
		q.push("8");
		//6 8 66 68 86 88 .....
		while(q.size()>0){
			string top=q.front(); q.pop();
			if(!check(top,n)) break;
			kq.push(top);
			q.push(top+"6");
			q.push(top+"8");
			
		}
		int dem=0;
		while(kq.size()){
			string top=kq.front();
			if(dem<n&&check2(top)){
				cout<<top<<" ";
				dem++;
			}
//			cout<<kq.front()<<' '; 
			kq.pop();
		}cout<<endl;
	}
    return 0;
}
