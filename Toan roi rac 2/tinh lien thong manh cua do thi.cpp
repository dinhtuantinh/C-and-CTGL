#include<iostream>
#include<queue>
#define max 100
using namespace std;
class Dothi{
    int n;
    int a[max][max];
    public:
    void init();
    bool chuaxet[max];
    void readdata();
    bool queueBFS(int u,int k);
    void check();
};
void Dothi::init(){
    for(int i=1;i<=n;i++){
        chuaxet[i]=true;
    }
}
void Dothi::readdata(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
}
bool Dothi::queueBFS(int u,int k){
    queue<int>hangdoi;
    hangdoi.push(u);
    chuaxet[u]=false;
    while(hangdoi.empty()==false){
        int s=hangdoi.front();
        hangdoi.pop();
        for(int i=1;i<=n;i++){
            if(a[s][i]==1 && chuaxet[i]==true){
                chuaxet[i]=false;
                hangdoi.push(i);
            }
        }
    }
    if(chuaxet[k]==true){
        return false;
    }
    return true;
}
void Dothi::check(){
    init();
    int x=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(queueBFS(i,j)==false){
                x++;
            }
        }
        init();
    }
    if(x==0){
        cout<<"strongly connected";
    }else {
        cout<<"not strongly connected";
    }
}
int main(){
    Dothi g;
    g.readdata();
    g.check();
    return 0;
}
