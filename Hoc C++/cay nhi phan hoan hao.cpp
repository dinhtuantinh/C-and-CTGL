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

bool isFull(node* t){ 
    if(t->left == NULL && t->right == NULL) 
        return true; 
    if((t->left != NULL && t->right != NULL) && isFull(t->left) && isFull(t->right)) 
        return true; 
   return false; 
}

bool checkUtil(node *t, int level, int &leafLevel){ 
    if(t == NULL) return true; 
    if(t->left == NULL && t->right == NULL) {
        if (leafLevel == 0){ 
            leafLevel = level;
            return true; 
        } 
        return (level == leafLevel); 
    } 
    return checkUtil(t->left, level + 1, leafLevel) && checkUtil(t->right, level + 1, leafLevel); 
} 

int check(node *t){ 
    int level = 0, leafLevel = 0; 
    return checkUtil(t, level, leafLevel); 
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
		if(isFull(t) && check(t)) cout<<"PERFECT"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

