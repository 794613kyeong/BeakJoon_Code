#include <iostream>
using namespace std;

int a, b, c;

void Input()
{
	cin >> a >> b >> c;
}
void Solution()
{
	while (true)
	{
		Input();
		if (a == 0 && b == 0 && c == 0)
			exit(0);
		if (b - a == c - b)
			cout << "AP " << c + b - a << endl;
		else
			cout << "GP " << c * b / a << endl;
	}
}
void Solve()
{
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