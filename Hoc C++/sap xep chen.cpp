//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[100000];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	int key, j, dem=0;
//	for (int i = 0; i < n; i++) {
//		cout<<"Buoc "<<i<<": ";
//		j=i;
//		key = a[i];
//		while(j>0 && key < a[j-1]){
//			a[j] = a[j-1];
//			j=j-1;
//			
//		}
//		dem++;
//		a[j] = key;
//		for (int i = 0; i < dem; i++) {
//			cout << a[i] << " ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

#include<stdio.h>
int main(){
	int j,x,i,n, k, a[100], dem=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		x=a[i];
		j=i-1;
		printf("Buoc %d:",dem);
		dem++;
		for(k=0;k<i;k++) printf("%3d",a[k]);
		while(j>=0&&a[j]>x){
			a[j+1]=a[j];
			j--; 
		} 
		a[j+1]=x; 
		printf("\n");
	} 
	printf("Buoc %d:",dem);
	for(i=0;i<n;i++) printf("%3d",a[i]);
}
