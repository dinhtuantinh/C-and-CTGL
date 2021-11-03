#include<bits/stdc++.h>
using namespace std;

struct node{
	char val;
	node *left, *right; 
};

node *newNode(char v){
	node *res = new node;
	res->val = v;
	res->left = res->right = NULL;
	return res;
}

void inOrder(node* t){
	if(t!=NULL){
		inOrder(t->left);
		cout<<t->val<<" ";
		inOrder(t->right);
	}
}

bool isOperator(char c) { 
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^') 
        return true; 
    return false; 
} 

node *makeTree(string s){
	stack<node*> stk;
	node *t, *t1, *t2;
	for(int i=0; s[i]; i++){
		if(!isOperator(s[i])){
			t = newNode(s[i]);
			stk.push(t);
		}
		else{
			t = newNode(s[i]);
			t1 = stk.top(); stk.pop();
			t2 = stk.top(); stk.pop();
			t->left = t2;
			t->right = t1;
			stk.push(t);
		}
	}
	return stk.top();
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		node *t = makeTree(s);
		inOrder(t);
		cout<<endl;
	}
	return 0;
}

