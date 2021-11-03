#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string digits;
		cin>>digits;
		if(digits[0]=='0'){
			cout<<0<<endl;
			continue;
		}
		int n=digits.length();
		int count[n+1];  
	    count[0] = 1; 
	    count[1] = 1;
//	    1 2 3 0 1
//	    i=2 -> count[2]=1,	(1,2)
//	    		count[2]=2, 	(1,2); (12)
//	    i=3 -> count[3]=2,	(1,2,3);	(12,3)
//	    		count[3]=1, 	(1,23);
//	    i=4 -> count[4]=0
//	    i=5 -> count[5]= 
	    /*
	    goi count[i] la so luong cach giai ma dc tinh den ky tu thu i
	    TH1: ky tu thu i chen vao sau tung bo da giai ma den ky tu thu i-1 thi van duoc count[i-1] bo
	    TH2: ghep ky tu i-1 vao ky tu i thanh 1 so co 2 chu so thi so 2 chu so khi chen vao cac bo da 
	    giai ma duoc tinh toi ky tu i-2 thi van duoc count[i-2] bo
	    => count[i]=count[i-1] + count[i-2]
	    */
	    for (int i=2; i<=n; i++) { 
	        count[i] = 0; 
	        if(digits[i-1] > '0') 
	            count[i] = count[i-1]; 
	        if(digits[i-2] == '1' ||  (digits[i-2] == '2' && digits[i-1] < '7')) 
	            count[i] += count[i-2];
 		} 
	    cout<<count[n]<<endl;
	}
	return 0;
}
