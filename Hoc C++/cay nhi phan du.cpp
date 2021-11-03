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

bool isFull(node* t) { 
    if(t->left == NULL && t->right == NULL) 
        return true; 
    if((t->left != NULL && t->right != NULL) && isFull(t->left) && isFull(t->right)) 
        return true; 
   return false; 
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
		node *t = makeTree(n);
		cout<<isFull(t)<<endl;
	}
	return 0;
}

