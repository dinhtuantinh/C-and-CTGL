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

int depth(node *t){
	if(t==NULL) return 0;
	int l_depth = depth(t->left);
	int r_depth = depth(t->right);
	if(l_depth > r_depth)
		return l_depth+1;
	return r_depth+1;
}

void printLevel(node* t, int level){  
    if(t == NULL)  
        return;  
    if(level == 1)  
        cout<<t->val<<" ";  
    else if(level > 1){  
        printLevel(t->left, level-1);  
        printLevel(t->right, level-1);  
    }  
}

void levelOrder(node* t){  
	int d = depth(t);  
    int i;  
    for(i = 1; i <= d; i++)  
        printLevel(t, i);  
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
		levelOrder(t);
		cout<<endl;
	}
	return 0;
}

