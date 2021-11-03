#include<iostream>
#include<vector>
using namespace std;
int a[1000001]; 
void sang( ){
	for(long long i=0; i<1000001; i++){
		a[i]=1;
	}
    a[0]=0, a[1]=0;
    for(long long i=2;i<=1000001;i++)
        if(a[i]==1)
            for(long long j=i*i;j<1000001;j+=i)
                a[j]=0;
}

int main( ){
    int t;
    cin>>t;
    while(t--){
        sang( );
        long long n;
        cin>>n;
        bool test=false;
        if(n<4) cout<<"-1";
        else{
            for(long long i=2;i<=n;i++){
                if(a[i] == true && a[n-i] == true){
                    cout<<i<<" "<<n-i;
                    test=true;
                    break;
                }
            }
            if(!test) cout<<"-1";
        }
        cout<<endl;
    }
    return 0;
}
