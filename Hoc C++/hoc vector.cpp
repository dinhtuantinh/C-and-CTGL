#include<bits/stdc++.h>
using namespace std;
int n;
int main(){

	vector< vector<int> > x;

	vector< int >  b;

	b.push_back(10);

	x.push_back(b);

	b.push_back(11);

	x.push_back(b);

	cout << x.size() << endl;

	for(int i = 0 ; i < x.size() ; i++){
		for( int j = 0 ; j < x[i].size(); j ++)
			cout << x[i][j] << ' ';
		cout << endl;
	}

	//x[0].
	cout << x.size() <<endl;
	

	for(int i = 0 ; i < x.size() ; i++){
		for( int j = 0 ; j < x[i].size(); j ++)
			cout << x[i][j] << ' ';
		cout << endl;
	}
}
