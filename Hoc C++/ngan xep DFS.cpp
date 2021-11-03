//#include<bits/stdc++.h>
//using namespace std;

void DFS(int u){
	int i,j,top;
	top=1;
	stack[top]=u;
	cxet[u]=0;
	while(top>0){
		int s=stack[top];
		cout<<s<<" ";
		top--;
		for(int i=1;i<=n;i++){
			if(a[s][i]==1&&cxet[i]==1){
				cxet[i]=0;
				top++;
				stack[top]=i;
				break;
			}
		}
	}
	cout<<endl;
}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int u;
//		cin>>u;
//		DFS(u);
//		cout<<endl;
//	}
//	return 0;
//}
