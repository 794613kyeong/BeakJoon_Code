#include <iostream>
#include <algorithm>
using namespace std;

int x, y, w, h;
int x, y;

void Input()
{
	cin >> x >> y >> w >> h;
}

void Solution()
{
	x = min(x, y);
	y = min(w - x, h - y);
	cout << min(x, y);
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