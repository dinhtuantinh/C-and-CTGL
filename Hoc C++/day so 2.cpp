//#include<bits/stdc++.h>
//using namespace std;
//vector< vector< int > >  res ;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//	
//		int n;
//		cin >> n;
//		vector< int > a;
//		for(int i=0;i<n;i++){
//			int x; cin >> x;
//			a.push_back(x);
//		}
//		res.push_back(a);
//		while(1){
//			vector<int > tmp;
//	
//			for(int i=0;i<a.size()-1;i++)
//				tmp.push_back(a[i] + a[i+1]);
//			res.push_back(tmp);
//			a = tmp;
//			if(tmp.size() == 1)
//				break;
//		}
//	
//		for(int i=res.size()-1;i>= 0 ; i -- ){
//			cout << '[';
//			for(int j=0;j<res[i].size(); j ++){
//				cout << res[i][j];
//				if(j == res[i].size()-1)
//					cout << ']';
//				else 
//					cout << ' ';
//			}
//			cout<<endl;
//		}
//		cout<<endl;
//		}
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n+1][n+1];
		for(int j=1;j<=n;j++){
			cin>>a[1][j];
		}
		int cot=n-1;
		for(int i=2;i<=n;i++){
			for(int j=1;j<=cot;j++){
				a[i][j]=a[i-1][j]+a[i-1][j+1];
			}
			cot--;
		}
		cot=n;
		vector<vector<int> > res;
		for(int i=1;i<=n;i++){
			vector<int> x;
			for(int j=1;j<=cot;j++){
				x.push_back(a[i][j]);
			}
			cot--;
			res.push_back(x);
		}
		for(int i=res.size()-1;i>=0;i--){
			for(int j=0;j<res[i].size();j++){
				if(j==0) cout<<"[";
				cout<<res[i][j];
				if(j==res[i].size()-1) cout<<"] ";
				if(j<res[i].size()-1) cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
} 
