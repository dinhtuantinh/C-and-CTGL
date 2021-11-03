#include<iostream>
#include<stack>
#include<queue>
#define m 100
using namespace std;
class Dothi{
  int n,f,l;
  int a[m][m];
  int truoc[m];
  public:
  bool chuaxet[m];
  void xet();
  void read();
  void quay();
  void stackdfs();
  void queuebfs();
};
void Dothi::read(){
    cin>>n>>f>>l;
    for(int u=1;u<=n;u++)
        for(int v=1;v<=n;v++) cin>>a[u][v];
}
void Dothi::xet(){
    for(int i=1;i<=n;i++){
        chuaxet[i]=true;
        truoc[i]=0;
    }
}
void Dothi::stackdfs(){
    chuaxet[f]=false;
    stack<int>b;
    b.push(f);
    while(!b.empty()){
        int s=b.top();
        b.pop();
        for(int i=1;i<=n;i++){
            if(a[s][i]==1&&chuaxet[i]==true){
                chuaxet[i]=false;
                b.push(s);
                b.push(i);
                truoc[i]=s;
                break;
            }
        }
    }
    if(truoc[l]==0) cout<<"no path";
    else{
        cout<<"DFS path: "<<l<<" ";
        int x=truoc[l];
        while(x!=f){
            cout<<x<<" ";
            x=truoc[x];
        }
        cout<<f;
        
    }
    cout<<endl;
}
void Dothi::queuebfs(){
    queue<int>c;
    chuaxet[f]=false;
    c.push(f);
    while(!c.empty()){
        int s=c.front();
        c.pop();
        for(int i=1;i<=n;i++){
            if(a[s][i]==true&&chuaxet[i]==true){
                c.push(i);
                truoc[i]=s;
                chuaxet[i]=false;
            }
        }
    }
    if(truoc[l]==0) cout<<"no path";
    else{
        cout<<"BFS path: "<<l<<" ";
        int x=truoc[l];
        while(x!=f){
            cout<<x<<" ";
            x=truoc[x];
        }
        cout<<f;
    }
}
int main(){
    Dothi G;
    G.read();
    G.xet();
    G.stackdfs();
    G.xet();
    G.queuebfs();
}
