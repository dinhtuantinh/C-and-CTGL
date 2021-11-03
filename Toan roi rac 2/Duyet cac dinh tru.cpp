#include<iostream>
#include<stack>
#define MAX 100
using namespace std;
class Dothi{
    int n;
    int A[MAX][MAX];
    public:
    bool chuaxet[MAX];
    void readdata();
    void init();
    void stackDFS(int u);
    void duyettru();
};
void Dothi::readdata(){
    cout<<"\nNhap so dinh cua do thi n = ";cin>>n;
    cout<<"\nNhap ma tran ke: \n";
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>A[i][j];
}
void Dothi::init(){
    for(int i=1;i<=n;i++) chuaxet[i]=true;
}
void Dothi::stackDFS(int u){
    stack<int> nganxep;
    chuaxet[u]=false;
    nganxep.push(u);
    while(!nganxep.empty()){
        int s=nganxep.top();
        nganxep.pop();
        for(int t=1;t<=n;t++)
            if((A[s][t]==1)&&(chuaxet[t]==true)){
                chuaxet[t]=false;
                nganxep.push(s);nganxep.push(t);
                break;
            }
    }
}
void Dothi::duyettru(){
    init();
    for(int u=1;u<=n;u++){
        chuaxet[u]=false;
        stackDFS(1);
        for(int k=1;k<=n;k++){
            if(chuaxet[k]==true){
                cout<<"     "<<u<<"\n";
                break;
            }
        }
        init();
    }
}
int main(){
    Dothi   G;
    G.readdata();
    G.duyettru();
}
