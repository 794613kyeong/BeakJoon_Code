#include <iostream>
using namespace std;

long long n;
//재귀 함수 사용하기!!
void DectoBin(unsigned long long binary)
{
	if (binary != 1) DectoBin(binary / 2);
	cout << (binary % 2);
}
void Input()
{
	cin >> n;
}

void Solution()
{
	DectoBin(n);
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