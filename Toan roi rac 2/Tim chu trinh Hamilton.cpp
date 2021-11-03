#include<iostream>
#define MAX 100
using namespace std;
class dothi{
    int n,a[MAX][MAX];
    public:
    bool chuaxet[MAX];
    int X[MAX];
    void readdata();
    void init();
    void htm(int k);
};
void dothi::readdata(){
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
}
void dothi::init(){
    for(int i=1;i<=n;i++) chuaxet[i]=true;
}
void dothi::htm(int k){
    for(int y=1;y<=n;y++)
        if(a[X[k-1]][y]==1)
            if((k==n+1)&&(y==X[1])){
                for(int i=1;i<=n;i++) cout<<" "<<X[i];cout<<" "<<X[1]<<endl;
            }
            else{
                if(chuaxet[y]==true){
                    X[k]=y;chuaxet[y]=false;    htm(k+1);chuaxet[y]=true;
                }
            }
        
    
}
int main(){
    dothi G;
    G.readdata();
    G.init();
    G.X[1]=1;
    G.chuaxet[G.X[1]]=false;
    G.htm(2);
}
