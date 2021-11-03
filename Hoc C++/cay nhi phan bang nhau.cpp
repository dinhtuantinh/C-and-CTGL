#include<bits/stdc++.h>
using namespace std;

struct node{
	int val;
	node *left, *right; 
};

node *newNode(int v){
	node *res = new node;
	res->val = v;
	res->left = res->right = NULL;
	return res;
}

int isSame(node *t1, node *t2){ 
    if(t1==NULL && t2==NULL) 
        return 1; 
    if(t1!=NULL && t2!=NULL) 
        return (t1->val==t2->val && isSame(t1->left, t2->left) && isSame(t1->right, t2->right)); 
   return 0; 
}

node* makeTree(int n){
	map<int,node *> m;
	node *t=NULL;
	while(n--){
		int a, b;
		char c;
		cin>>a>>b>>c;
		node *cha;
		if(m.find(a) == m.end()){
			cha = newNode(a);
			m[a] = cha;
			if(t == NULL)
			t = cha;
		}
		else cha = m[a];
		node *con = newNode(b);
		if(c == 'L')
		cha->left = con;
		else if(c == 'R')
		cha->right = con;
		m[b] = con;
	}
	return t;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		node *t1 = makeTree(n);
		cin>>n;
		node *t2 = makeTree(n);
		cout<<isSame(t1, t2)<<endl;
	}
	return 0;
}

