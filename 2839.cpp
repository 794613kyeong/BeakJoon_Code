#include <iostream>
using namespace std;

int N;	// kg
int first, second;	//5kg, 3kg 묶음 봉지
void Input()
{
	cin >> N;
}
void Solution()
{
	first = N / 5;	// 5kg 봉지 개수

	while (1)
	{
		if (first < 0)	// 나누어 떨어지지 않는 수
		{
			cout << "-1";
			exit(0);
		}
		if ((N - (5 * first)) % 3 == 0)	// 3kg으로 나눠지는 봉지 개수 구하기 (N-(5*first)해서 N%5값을 구함)
		{
			second = (N - (5 * first)) / 3;
			break;
		}
		first--;	// 1개씩 감소하면서 반복
	}
	cout << first + second;
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