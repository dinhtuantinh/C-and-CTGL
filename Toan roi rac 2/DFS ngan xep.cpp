//Chuong trinh c++ duyet tap dinh cua do thi DFS ngan xep
#include<iostream>
#include<stack>
#define MAX 100
using namespace std;
class   Dothi{
    int     n;                      // so dinh, canh toi da cua do thi
    int     A[MAX][MAX];            //ma tran ke
    public:
    bool    chuaxet[MAX];           //mang theo doi trang thai duyet cac dinh
    void    readdata();             //ham doc du lieu do thi 
    void    set();                  // haam khoi tao
    void    loopDFS(int u);         //ham duyet tap dinh cua do thi su dung DFS ngan xep 
};
void    Dothi::readdata(){
    cout<<"\nNhap so dinh cua do thi: n= ";cin>>n;
    cout<<"\nNhap ma tran ke:\n";
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)   cin>>A[i][j];
}
void    Dothi::set(){
    for(int i=1;i<=n;i++) chuaxet[i]=true;
}
void    Dothi::loopDFS(int u){
    //Khoi tao
    stack<int>  nganxep;
    cout<<"     "<<u;
    chuaxet[u]=false;
    nganxep.push(u);
    //Lap
    while(!nganxep.empty()){
        int s = nganxep.top();
        nganxep.pop();
        for(int t=1;t<=n;t++){
            if((A[s][t]==1)&&(chuaxet[t]==true)){
                cout<<"     "<< t;
                chuaxet[t]=false;
                nganxep.push(s);
                nganxep.push(t);
                break;
            }
        }
    }
}
int main(){
    Dothi   G;
    G.readdata();
    G.set();
    cout<<"\nKet qua duyet DFS ngan xep: ";
    G.loopDFS(1);
}
