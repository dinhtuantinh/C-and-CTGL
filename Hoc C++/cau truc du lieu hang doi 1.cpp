#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		int x; //val=0;
		cin>>x;
		queue<int > q;
		
		while(x--){
			int n;
			cin>>n;
			int k;
			switch(n){
				case 1:
					cout<<q.size()<<endl;
					break;
				case 2:
					if(q.size()==0) cout<<"YES";
					else cout<<"NO";
					break;
				case 3:
					
					cin>>k;
					q.push(k);
					//cout<<endl;
					break;
				case 4:
					if(q.size()>0){
						q.pop();
						//cout<<endl;
					}
					else continue;
					//cout<<endl;
					break;
				case 5:
					if(q.size()==0) cout<<"-1\n";
					else cout<<q.front()<<endl;
					break;
				case 6:
					if(q.size()==0) cout<<"-1\n";
					else cout<<q.back()<<endl;
//				default:
//					continue;
					break;
			}
			cout<<endl;	
		}
		cout<<endl;
	}
	return 0;
}

