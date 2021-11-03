#include<iostream>
#define MAX 100
using namespace std;
struct edg{
    int h, id,  n1, n2;
};
class dothi{
    int n,a[MAX][MAX],ne, atree[MAX][MAX],dH;  
    edg graph[MAX], tree[MAX];
    public:
    bool chuaxet[MAX];
    void readdata();
    void init();
    void dfstree(int u);
    void bubblesort();
    void kruskal();
};
void dothi::readdata(){
    cin>>n;ne=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if((a[i][j]>0)&&(i<j)){
                ne++; graph[ne].h=a[i][j]; graph[ne].n1=i; graph[ne].n2=j;
            }
        }
    }
}
void dothi::init(){
    for(int i=1;i<=n;i++) chuaxet[i]=true;
}
void dothi::dfstree(int u){
    chuaxet[u]=false;
    for(int i=1;i<=n;i++){
        if((atree[u][i]==1)&&(chuaxet[i]==true)) dfstree(i);
    }
}
void dothi::bubblesort(){
    for(int i=1;i<ne;i++){
        for(int j=ne;j>=i+1;j--){
            if(graph[j].h<graph[j-1].h){
                edg tmp=graph[j];
                graph[j]=graph[j-1];
                graph[j-1]=tmp;
            }
        }
    }
}
void dothi::kruskal(){
    dH=0;   int netree=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) atree[i][j]=0;
    }
    bubblesort();
    for(int i=1;i<=ne;i++){
        int n1=graph[i].n1, n2=graph[i].n2;
        init();     dfstree(n1);
        if(chuaxet[n2]==true){//khong tao thanh chua trinh,bo sung vao cay
            netree++; tree[netree].n1=n1; tree[netree].n2=n2;
            dH+=graph[i].h;
            atree[n1][n2]=1; atree[n2][n1]=1;
        }
    }
    if(netree==n-1){
        cout<<"  dH = "<<dH;
        for(int i=1;i<=netree;i++) cout<<endl<<tree[i].n1<<"  "<<tree[i].n2;
    }
}
int main(){
    dothi g;
    g.readdata();
    g.kruskal();
}
