#include<bits/stdc++.h>

using namespace std;
void play(){
	int somay=1+rand()%100;
	int solandoan=0;
	int songuoi;
	do{
		cout<<"may doan 1 so[1...100],so cua ban : ";
		cin>>songuoi;
		solandoan++;
		if(songuoi==somay){
			cout<<"ban win, somay="<<somay<<endl;
			break;
		}
		if(songuoi<somay){
			cout<<"so ban doan < somay"<<endl;
		}
		else{
			cout<<"so ban doan > so may"<<endl;
			
		}
		if(solandoan==7){
			cout<<"game over! so cua may la:"<<somay;
			break;
		}
	}while(true);
}
int main(){
	srand(time(NULL));
	play();
	return 0;
}


