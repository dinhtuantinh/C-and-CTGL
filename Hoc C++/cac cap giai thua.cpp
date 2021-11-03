#include<iostream>
//Dinh Tuan Tinh
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long a;
		cin>>n>>a;
		vector<int>result;
		while(a){
			int x=a%10;
			if(x==0||x==1){

			}
			else if(x==6){
				result.push_back(3);
				result.push_back(5);
			}
			else if(x%2==0){
				if(x-1>1) result.push_back(x-1);
				while(x%2==0){
					result.push_back(2);
					x/=2;
				}
			}
			else if(x==9){
				result.push_back(2);
				result.push_back(3);
				result.push_back(3);
				result.push_back(7);
			}
			else{
				result.push_back(x);
			}
			a/=10;
		}
		sort(result.begin(),result.end());
		for(int i=result.size()-1;i>=0;i--){
			cout<<result[i];
		}
		cout<<endl;	
	}	
	return 0;
}
