#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int SoTest;
	cin >> SoTest;
	while (SoTest--)
	{
		int n, x, * Arr, lock = 0;
		cin >> n >> x;
		Arr = new int[n + 1];
		bool KT[100011] = { 0 };
		for (int i = 0; i < n; i++) cin >> Arr[i], KT[Arr[i]] = 1;

		for (int i = 0; i < n; i++)
		{
			if (x + Arr[i] < 100001)
			{
				if (KT[Arr[i]] == 1 && KT[x + Arr[i]] == 1)
				{
					cout << "1\n";
					lock = 1;
					break;
				}
			}
		}
		if (lock == 0) cout << "-1\n";
		delete[] Arr;
	}
	return 0;
}
