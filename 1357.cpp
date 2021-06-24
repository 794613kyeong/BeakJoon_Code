#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string a, b;
int Rev(string str)
{
	reverse(str.begin(), str.end());
	int result = stoi(str);
	return result;
}

void Input()
{
	cin >> a >> b;
}

void Solution()
{
	int res = Rev(a) + Rev(b);
	cout << Rev(to_string(res)) << endl;
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