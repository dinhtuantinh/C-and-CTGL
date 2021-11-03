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

int sum(node *t){ 
	if(t == NULL) 
		return 0; 
	return sum(t->left) + t->val + sum(t->right); 
}

int isSumTree(node* t) { 
    int lsum, rsum; 
    if(t == NULL || (t->left == NULL && t->right == NULL)) 
        return 1; 
   lsum = sum(t->left); 
   rsum = sum(t->right); 
    if((t->val == lsum + rsum) && isSumTree(t->left) && isSumTree(t->right)) 
        return 1; 
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
		node *t = makeTree(n);
		cout<<isSumTree(t)<<endl;
	}
	return 0;
}

