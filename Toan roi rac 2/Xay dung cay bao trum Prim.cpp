#include<iostream>
#include<stack>
#define MAX 100
using namespace std;
struct edg{
    int h, id, n1, n2;
};
class dothi{
    int n, a[MAX][MAX], ne, atree[MAX][MAX],dH;
    edg graph[MAX],tree[MAX];
    public:
    int stree;
    bool chuaxet[MAX];
    void readdata();
    void init();
    void dfstree(int u);
    void bubblesort();
    void prim(int s);
};
void dothi::readdata(){
    cin>>n>>stree; ne=0; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]>0&&i<j){
                ne++; graph[ne].h=a[i][j]; graph[ne].n1=i; graph[ne].n2=j;
            }
        }
    }
}
void dothi::init(){
    for(int i=1;i<=n;i++)
        chuaxet[i]=true;
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
void dothi::prim(int s){
    dH=0; int net=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            atree[i][j]=0;
        }
    }
    // tree[MAX]={s};
    // init();
    //dfstree(s);
    bubblesort();
    while(net!=n-1){
        int connected=0;
        for(int i=1;i<=ne;i++){
            init();dfstree(stree);int n1=graph[i].n1,n2=graph[i].n2;
            if(((chuaxet[n1]&&chuaxet[n2])==false)&&
               ((chuaxet[n1]||chuaxet[n2])==true)){
                net++; tree[net].n1=n1;tree[net].n2=n2;
                dH+=graph[i].h;
                atree[n1][n2]=atree[n2][n1]=1;
                cout<<n1<<"  "<<n2<<endl;
                connected=1;break;
            }
            //connected=0;
        }
       // if(i=ne+1)
       //if(connected==0) return;
    }
    cout<<"dH = "<<dH<<endl;
    for(int i=1;i<=net;i++) cout<<tree[i].n1<<"  "<<tree[i].n2<<endl;
}
int main(){
    dothi g;
    g.readdata();
    g.prim(g.stree);
}
//0 4 3 5 0 0 0 0 0 0 0 0 0
//4 0 4 0 0 7 7 0 0 0 0 0 0
//3 4 0 6 0 7 0 0 0 0 0 0 0
//5 0 6 0 7 7 0 0 0 0 0 0 0
//0 0 0 7 0 8 0 0 0 8 0 0 0
//0 7 7 7 8 0 8 8 8 8 0 0 0
//0 7 0 0 0 8 0 8 0 0 0 0 0
//0 0 0 0 0 8 8 0 9 0 0 9 9 
//0 0 0 0 0 8 0 9 0 9 9 0 0
//0 0 0 0 8 8 0 0 9 0 9 9 0
//0 0 0 0 0 0 0 0 9 9 0 10 0
//0 0 0 0 0 0 0 9 0 9 10 0 10
//0 0 0 0 0 0 0 9 0 0 0 10 0
