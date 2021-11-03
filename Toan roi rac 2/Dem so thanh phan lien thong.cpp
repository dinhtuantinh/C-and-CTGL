#include<iostream>
#include<queue>
#define MAX 100
using namespace std;
class Dothi{
    int n;
    int A[MAX][MAX];
    public:
    bool chuaxet[MAX];
    void readdata();
    void init();
    void queueBFS(int u);
    void lienthong();
};
void Dothi::readdata(){
    cout<<"\nNhap so dinh cua do thi n = ";cin>>n;
    cout<<"\nNhap ma tran ke: \n";
    for(int u=1;u<=n;u++)
        for(int v=1;v<=n;v++) cin>>A[u][v];
}
void Dothi::init(){
    for(int i=1;i<=n;i++) chuaxet[i]=true;
}
void Dothi::queueBFS(int u){
    queue<int> hangdoi;
    hangdoi.push(u);
    chuaxet[u]=false;
    while(!hangdoi.empty()){
        int s=hangdoi.front();
        hangdoi.pop();
        for(int t=1;t<=n;t++){
            if((A[s][t]==1)&&(chuaxet[t]==true)){
                chuaxet[t]=false;
                hangdoi.push(t);
            }
        }
    }
}
void Dothi::lienthong(){
    init();
    int dem=0;
    for(int i=1;i<=n;i++){
        if(chuaxet[i]==true){
            dem++;
            queueBFS(i);
        }
        //init();
    }
    cout<<dem;
}
int main(){
    Dothi G;
    G.readdata();
    G.lienthong();
}
