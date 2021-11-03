//#include<bits/stdc++.h>
//using namespace std;
//long long Luy_Thua(long long a,long long n){
//	if(n==0) return 1;
//	long long m=Luy_Thua(a,n/2);
//	m*=m;
//	m%=10;
//	if(n%2==0) return m;
//	return (m*a)%10;
//}
//int main(){
//	long long t;
//	cin>>t;
//	while(t--){
//		string s;
//		cin>>s;
//		long long dem=0;
//		long long sum=0;
//		for(long long i=s.size()-1;i>=0;i--){
//			long long m=(s[i]-'0')*Luy_Thua(2,dem);
//			sum=sum+m%10;
//			while(sum>=10){
//				sum%=10;
//			}
//			dem++;
//		}
//		if(sum==0||sum==5){
//			cout<<"Yes";
//		}
//		else{
//			cout<<"No";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		int x = 0;
		int size = s.size();
		int k;
		for (int i = 0; i < size; i++){
			int p = 1;					
			int h = 0;
			k = s[size - 1 - i] - '0';	
			while (h < i){
				p *= 2;
				if (p > 10){
					p %= 10;
				}
				h++;
			}
			x += k * p;
			if (x > 10)
				x %= 10;
		}
		if (x % 5 == 0){
			cout << "Yes" << '\n';
		}
		else cout << "No" << '\n';
	}
	return 0;
}
