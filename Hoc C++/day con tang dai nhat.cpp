#include<bits/stdc++.h>
using namespace std;
int main(){
//	int t;
//	cin>>t;
//	while(t--){
		int n;
		cin>>n;
		int a[n];
		int d[1001]={0};
		for(int i=0;i<1001;i++){
			d[i]=1;
		}
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(a[i]>a[j]){
					d[i]=d[j]+1;
				}
			}
		}
		int kq=0;
		for(int i=1;i<=n;i++){
			if(kq<d[i]){
				kq=d[i];
			}
		}
		cout<<kq;
//	}
	return 0;
}
//a[6]={1 2 5 4 6 2}
//+)i = 1, d[1] = 1;
//
//+)i = 2
//    j = 1, 1 -> j = 1 -> 1, d[j]:do dai day con tinh tu 1 -> 1: d[1] = 1 
//	vi a[2] > a[1] => d[2] = max(d[2], d[1] + 1) = 2 ta co day d la  1 2 1 1 1 1
//
//+)i = 3 
//    j = 1, 1 -> 1, chen a[3] sau a[1]: 1 5 => d[3] = max(d[3], d[1] + 1) = 2
//    j = 2, 1 -> 2, chen a[3] sau a[2]: 1 2 5 => d[3] = max(d[3], d[2] + 1) = 3
//    ta co day d la 1 2 3 1 1 1
// 
//+)i = 4
//    j = 1, 1->1, chen a[4] sau a[1]: 1 4 => d[4] = max(d[4], d[1] + 1) = 2 
//    j = 2, 1->2, chen a[4] sau a[2]: 1 2 4 => d[4] = max(d[4], d[2] + 1) = 3
//    j = 3, 1->3, chen a[4] sau a[3]: khong lam gi ca
//    ta o day d la 1 2 3 3 1 1
//    
//+)i = 5
//    j = 1, 1->1, chen a[5] sau a[1]: 1 6 -> d[5] = max(d[5], d[1]+1) = 2 
//    j = 2, 1->2, chen a[5] sau a[2]: 1 2 6 -> d[5] = max(d[5], d[2] + 1) = 3
//    j = 3, 1->3, chen a[5] sau a[3]: 1 2 5 6 -> d[5]= max(d[5], d[3] + 1) = 4
//    j = 4, 1->4, chen a[5] sau a[4]: 1 2 4 6 -> d[5] = max(d[5], d[4] + 1) = 4
//    ta co day d la 1 2 3 3 4
//+)i = 6
//    j = 1, 1->1, chen a[6] sau a[1]: 1 2 -> d[6] = max(d[6], d[1]+1) = 2 
//    j = 2, 1->2, chen a[6] sau a[2]: khong lam gi
//    j = 3, 1->3, chen a[6] sau a[3]: khong lam gi
//    j = 4, 1->4, chen a[6] sau a[4]: khong lam gi
//    j = 4, 1->4, chen a[6] sau a[4]: khong lam gi
//    ta co day d la 1 2 3 3 4 2
//    


















