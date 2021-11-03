#include <iostream>
#define MAX 100
using namespace std;
class   Dothi{
    int         n;
    int         A[MAX][MAX];
    public:
    bool        chuaxet[MAX];
    void        readdata();
    void        set();
    void        recursiveDFS(int u);
};
void    Dothi::readdata(){
    cout << "\nNhap so dinh cua do thi: n = "; cin >> n;
    cout << "\nNhap ma tran ke:\n";
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin >> A[i][j];
}
void    Dothi::set(){
    for(int i=1; i<=n; i++) chuaxet[i]=true;
}
void    Dothi::recursiveDFS(int u){
    cout << " " << u;
    chuaxet[u]=false;
    for(int v=1; v<=n; v++)
        if((A[u][v]==1)&&(chuaxet[v]==true)) recursiveDFS(v);
}
int main(){
    Dothi       G;
    G.readdata();
    G.set();
    //cout << "\nKet qua duyet de quy DFS: ";
    G.recursiveDFS(1);
}

