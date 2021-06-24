#include <iostream>
using namespace std;

int L, W;
int i = 0;
void Input()
{
	cin >> L >> W;
}

void Solution()
{
	while (++i)
	{
		if (W % i == 0)
		{
			int row = W / i;
			if ((row + i + 2) * 2 == L)
			{
				cout << row + 2 << ' ' << i + 2 << endl;
				break;
			}
		}
		else continue;
	}
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