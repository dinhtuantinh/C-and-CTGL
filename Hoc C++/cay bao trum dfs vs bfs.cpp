#include<iostream>
#include<stack>
#include<queue>
#define MAX 100
using namespace std;
class dothi{
	int n, a[MAX][MAX];
	public:
	int s;
	void init();
	stack<int > T;
	queue<int> B;
	queue<int> C;
	bool chuaxet[MAX];
	void readdata();
	void stackdfs(int u);
	void queuebfs(int u);
	void dfs(int u);
	void bfs(int u); 
};
void dothi::readdata(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j];
	}
}
void dothi::init(){
	for(int i=1;i<=n;i++){
		chuaxet[i]=true;
	}
}
void dothi::stackdfs(int u){
	chuaxet[u]=false;
	for(int i=1;i<=n;i++){
		if(a[u][i]==1&&chuaxet[i]==true){
			T.push(u); 
			T.push(i);
			stackdfs(i);
		}
	}
}
void dothi::dfs(int u){
	init();
	//T={};
	stackdfs(s);
//	if(T>=(n-1)){
	stack<int > q;
	while(!T.empty()){
		int p;
		p=T.top();
		T.pop();
		q.push(p);
	}
		while(!q.empty()){
			cout<<q.top()<<" 	";q.pop();
			cout<<q.top()<<"	";q.pop();
			cout<<endl;
		}	
//	}
}
void dothi::bfs(int u){
	init();
	C.push(u);
	chuaxet[s]=false;
	while(!C.empty()){
		int t=C.front();
		C.pop();
		for(int i=1;i<=n;i++){
			if(a[t][i]==1&&chuaxet[i]==true){
				B.push(t);B.push(i);
				//cout<<t<<"	"<<i<<endl;
				chuaxet[i]=false;
				C.push(i);
			}
		}
	}
	while(!B.empty()){
		cout<<B.front()<<"	";B.pop();
		cout<<B.front()<<endl;B.pop();
	}
}
int main(){
	dothi g;
	g.readdata();
	//g.init();
	cout<<"DFS tree\n";
	g.dfs(g.s);
	cout<<"\nBFS tree\n";
	g.bfs(g.s);
}
