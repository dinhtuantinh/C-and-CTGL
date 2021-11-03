#include<bits/stdc++.h>
using namespace std;

int ugly[10001];
int n;

void genUgly(){
	int i2=1, i3=1, i5=1;
	int next2=2, next3=3, next5=5;
	int num;
	ugly[1]=1;
	for(int i=2; i<=10000; i++){
		num=min(min(next2, next3), next5);
		ugly[i]=num;
		if(num==next2){
			i2++;
			next2=ugly[i2]*2;
		}
		if(num==next3){
			i3++;
			next3=ugly[i3]*3;
		}
		if(num==next5){
			i5++;
			next5=ugly[i5]*5;
		}	
	}
}

int main(){
	int t;
	cin>>t;
	genUgly();
	while(t--){
		cin>>n;
		cout<<ugly[n]<<endl;
	}
	return 0;
}

