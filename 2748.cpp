#include <iostream>
using namespace std;

int n;

void Input()
{
	cin >> n;
}

void Solution()
{
	long *ary = new long[n + 1];
	ary[0] = 0;
	ary[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		ary[i] = ary[i - 1] + ary[i - 2];
	}
	cout << ary[n];
}
void Solve()
{
	Input();
	Solution();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}