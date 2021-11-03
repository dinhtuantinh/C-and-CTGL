#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void findSmallest(int m, int s)
{
    if (s == 0)
    {
        cout<<"-1 -1";
        //if(m==1) cout<<"0 0";
        return ;
    }
 	if (s > 9*m)
    {
        cout << "-1 -1";
        return ;
    }
    int k=s;
    int res[m];
    s -= 1;
    for (int i=m-1; i>0; i--)
    {
        if (s > 9)
        {
            res[i] = 9;
            s -= 9;
        }
        else
        {
            res[i] = s;
            s = 0;
        }
    }
    res[0] = s + 1;
    for (int i=0; i<m; i++)
        cout << res[i];
    cout<<" ";
    for(int i=m-1;i>=0;i--){
    	cout << res[i];
	}
//    int res2[m];
//    s=k;
//    s -= 1;
//    for (int i=m-1; i>0; i--)
//    {
//        if (s > 9)
//        {
//            res2[i] = 9;
//            s -= 9;
//        }
//        else
//        {
//            res2[i] = s;
//            s = 0;
//        }
//    }
//    res2[0] = s + 1;
//    for (int i=0; i<m; i++)
//        cout << res2[i];
}
int main()
{
//	int t;cin>>t;
//	while(t--){
	    int n , s ;
	    cin>>n>>s;
	    findSmallest(n, s);
	    cout<<endl;
//	}
    return 0;
}

