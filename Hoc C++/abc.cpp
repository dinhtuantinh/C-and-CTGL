#include<iostream>
using namespace std;
void mang(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
int x12(int a[], int n) {
    int dem=0;
    for (int i = 0; i < n; i++) {
        int t = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                t = true;
            }
        }
        if (t == false) break;
        dem++;
    }
    return dem;
}


int main() {
    int n;
    cin >> n;
    int a[101];
    mang(n, a);
    int b[1001];
    for(int i=0;i<n;i++) b[i]=a[i];
    int x=x12(a,n);
    for (int i = 0; i < n; i++) {
        int t = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (b[j] > b[j + 1]) {
                swap(b[j], b[j + 1]);
                t = true;
            }
        }
        if (t == false) break;
        cout << "Buoc " << x << ": ";
        x--;
        for (int k = 0; k < n; k++) cout << b[k] << " ";
        cout << "\n";
    }}	
    
   
