#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		string s1,s2;
		s1 = s;
		s2 = s;
		for (int i = 0; i < s1.size-1; i++) {
			for (int j = i + 1; j < s1.size; i++) {
				if (s1[i] > s1[j]) {
					int tmp = s1[i];
					s1[i] = s1[j];
					s1[j] = tmp;
				}
			}
		}
		if (s2-s1==0) cout << "-1";
		cout << endl;
	}
	return 0;
}
