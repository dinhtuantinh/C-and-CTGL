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
  void duyetcau();
};
void Dothi::readdata(){ 
    cout<< "\nNhap so dinh cua do thi n = ";cin>>n;
    cout<<"\nNhap ma tran ke : \n";
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
void Dothi::duyetcau(){
    init();
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            if(A[i][j]==1){
                A[i][j]=0; A[j][i]=0;
                queueBFS(1);
                for(int t=1;t<=n;t++)
                    if(chuaxet[t]==true){
                        cout<<i<<"  "<<j<<"\n";
                        break;
                    }
                    A[i][j]=1;A[j][i]=1;
                    init();
            }
}
int main(){
    Dothi       G;
    G.readdata();
    G.duyetcau();
}
