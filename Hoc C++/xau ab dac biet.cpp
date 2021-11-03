#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n,a[100],k;
string s="";
vector<string>kq;
void Try(int i);
int main(){
	cin>>n>>k;
	for(int i=0;i<k;i++){
		s+="A";
	}
	Try(1);
	sort(kq.begin(),kq.end());
	cout<<kq.size()<<endl;
	for(int i=0;i<kq.size();i++){
		cout<<kq[i]<<endl;
	}
	return 0;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i!=n-k){
			Try(i+1);
		}
		else{
			for(int x=1;x<=n-k;x++){
				if(a[x]==1&&x==n-k){
					string tam= "";
					for(int p=1;p<=n-k;p++){
						if(a[p]) tam+= "B";
						else tam +="A";
					}
					tam+=s;
					kq.push_back(tam);
				}
				if(a[x]==1&&x==1){
					string tam=s;
					for(int p=1;p<=n-k;p++){
						if(a[p]) tam+="B";
						else tam+="A";
					}
					kq.push_back(tam);
				}
				if(a[x-1]&&x>1&&a[x]){
					string tam= "";
					for(int p=1;p<=n-k;p++){
						if(p==x) tam+=s;
						if(a[p]) tam+="B";
						else tam+="A";
					}
					kq.push_back(tam);
				}
			}
		}
	}
}
