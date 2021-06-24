#include <iostream>
#include <cmath>

using namespace std;
int a, b, c;
float sol;
void Input()
{
	cin >> a >> b >> c;
}

void Solution()
{
	sol = sqrt(a * a) / sqrt(b * b + c * c);
	cout << int(sol * b) << ' ' <<int(sol * c) << endl;
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