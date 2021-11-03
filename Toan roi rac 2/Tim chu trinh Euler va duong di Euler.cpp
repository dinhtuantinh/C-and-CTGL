#include<iostream>
#include<stack>
#define MAX 100
using namespace std;
class dothi{
    int n,  a[MAX][MAX];
    public:
    int s;
    //int X[MAX];
    void readdata();
   // void init();
    void euler(int u);
};
void dothi::readdata(){
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin>>a[i][j];
    }
}
void dothi::euler(int u){
    stack<int> nx,ce;
    nx.push(u);
    while(!nx.empty()){
        int s=nx.top(), empty=1;
        for(int i=1;i<=n;i++){
            if((a[s][i]==1)){
                nx.push(i);
                a[s][i]=a[i][s]=0;
                empty=0;
                break;
            }
        }
        if(empty==1){
            ce.push(s);
            nx.pop();
        }
    }
    while(!ce.empty()){
        cout<<ce.top()<<" "; ce.pop();
    }
    
}
int main(){
    dothi g;
    g.readdata();
    // g.init();
    // g.X[1]=1;
    //g.chuaxet[g.X[1]]=false;
    g.euler(g.s);
}
//10
//5
//0 1 1 0 0 0 0 0 0 0
//0 0 1 1 1 0 0 0 0 0
//0 0 0 0 0 0 0 0 1 1
//0 0 0 0 0 1 1 0 0 0
//0 0 0 0 0 1 0 0 0 0
//0 0 0 0 0 0 1 1 0 0
//0 0 0 1 0 0 0 1 0 0
//1 1 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 1
//1 1 0 0 0 0 0 0 0 0
