#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int n;
	cout<<"Nhap so co hai chu so: ";
	cin>>n;
	if(n<0&&n>99){
		cout<<"Moi ban nhap so co 2 chu so!";
	}
	else{
		int donvi=n%10;
		int chuc=n/10;
		if(chuc==1){
			cout<<"Mot";
		}
		else if(chuc==2){
			cout<<"Hai";
		}
		else if(chuc==3){
			cout<<"Ba";
		}
		else if(chuc==4){
			cout<<"Bon";
		}
		else if(chuc==6){
			cout<<"Sau";
		}
		else if(chuc==7){
			cout<<"Bay";
		}
		else if(chuc==8){
			cout<<"Tam";
		}
		else if(chuc==9){
			cout<<"Chin";
		}
		else if(chuc==5){
			cout<<"Nam";
		}
		cout<<" muoi ";
		if(donvi==1){
			cout<<"mot";
		}
		else if(donvi==2){
			cout<<"hai";
		}
		else if(donvi==3){
			cout<<"ba";
		}
		else if(donvi==4){
			cout<<"bon";
		}
		else if(donvi==5){
			cout<<"lam";
		}
		else if(donvi==6){
			cout<<"sau";
		}
		else if(donvi==7){
			cout<<"bay";
		}
		else if(donvi==8){
			cout<<"tam";
		}
		else if(donvi==9){
			cout<<"chin";
		}
	}
	return 0;
}


