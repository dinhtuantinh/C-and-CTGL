#include <iostream>
#include <string>
#include <algorithm>
//Dinh Tuan Tinh
using namespace std;
bool Whichputfirst(string a, string b)
//cai nao lon hon thi cho len truoc
{
    string ab=a.append(b);
    string ba=b.append(a);
    if(ab.compare(ba)>0) return true;
    return false;
}
main()
{
	int t;
	cin>>t;
	while(t--){	
	    int n; cin >> n; string a[n];
	    for(int i=0; i<n; i++) cin >> a[i];
	    sort(a, a+n, Whichputfirst);
	    for(int i=0; i<n; i++) cout << a[i];
	    cout<<endl;
	}
	return 0;
}
