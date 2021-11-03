#include<bits/stdc++.h>
using namespace std;

struct node{
	string val;
	node *left, *right; 
};

node *newNode(string s){
	node *res = new node;
	res->val = s;
	res->left = res->right = NULL;
	return res;
}

bool isOperator(string c) { 
    if(c == "+" || c == "-" || c == "*" || c == "/") 
        return true; 
    return false; 
}

int valueOf(string s){
	int res=0;
	int i=0;
	if(s[0]=='-') i++;
	for(i; s[i]; i++)
		res = res*10 + (s[i]-'0');
	if(s[0]=='-') return -res;
	return res;
} 

int result(node *t){
	if(t==NULL)
		return 0;
	if(t->left==0 && t->right==0)
		return valueOf(t->val);
	int l = result(t->left);   
    int r = result(t->right);  
    if(t->val=="+")  
    	return l+r;  
    if(t->val=="-")  
    	return l-r;
    if(t->val=="*")  
    	return l*r;
    return l/r;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s[n];
		int i;
		for(i = 0; i < n; i++){
			cin>>s[i];
		}
		i=0;
		node *t = newNode(s[i++]);
		queue<node*> q;
		q.push(t);
		while(!q.empty()){
			node *t1, *t2, *t3;
			t1 = q.front();
			q.pop();
			if(isOperator(t1 -> val)){
				t2 = newNode(s[i++]);
				t3 = newNode(s[i++]);
				t1 -> left = t2;
				t1 -> right = t3;
				q.push(t2);
				q.push(t3);
			}
		}
		cout<<result(t)<<endl;
	}
	return 0;
}

