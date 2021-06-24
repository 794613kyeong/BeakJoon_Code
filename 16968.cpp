#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s;
int res = 0;

void Input()
{
	cin >> s;
}

void Solution()
{
	for (int i = 0; i < s.length(); i++) {
		if (i == 0) {
			if (s[i] == 'd') {// 'd'가 연속으로 올 때
				res += 10;
			}
			else {//'c'가 연속으롱 올 때
				res += 26;
			}
			continue;
		}

		if (s[i] == s[i - 1]) {
			if (s[i] == 'd') {
				res *= 9;
			}
			else {
				res *= 25;
			}
		}
		else {
			if (s[i] == 'd') {
				res *= 10;
			}
			else {
				res *= 26;
			}
		}
	}
	cout << res << '\n';
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