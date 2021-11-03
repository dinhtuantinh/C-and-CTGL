#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<int > q;
		while(n--){
			int so;
			cin>>so;
			if(so==1){
				cout<<q.size()<<endl;
			}
			else if(so==2){
				if(q.size()==0){
					cout<<"YES";
				}
				else cout<<"NO";
				cout<<endl;
			}
			else if(so==3){
				int m;
				cin>>m;
				q.push(m);
			}
			else if(so==4){
				if(q.size()>0) q.pop();
			}
			else if(so==5){
				if(q.size()==0){
					cout<<-1;
				}
				else cout<<q.front();
				cout<<endl;
			}
			else if(so==6){
				if(q.size()==0){
					cout<<-1;
				}
				else cout<<q.back();
				cout<<endl;
			}
		}
	}
	return 0;
}

