// 내가 작성한 코드가 복잡하고 최소값도 안 구해져서 구글링 함
#include <iostream>
#include<string>

using namespace std;

int M, N;	// M이상 N이하
int sum = 0, cnt = 0;
void Input()
{
	cin >> M >> N;
}
void Solution()
{
	int min = 10001;
	for (int j = 1; j <= 100; j++)
	{
		if (j*j >= M && j*j <= N)	//최대값
		{
			sum += j * j;
			cnt++;
		}
		if (j*j >= M && j*j <= N && j*j < min)	// 최솟값, j*j < min(문제에서 주어진 제한값)해서 딱 한번 받을 수 있음
		{
			min = j * j;

		}
	}
	if (cnt == 0)	// 완전제곱수가 없을 경우
	{
		cout << "-1";
		exit(0);
	}
	cout << sum << '\n' << min;

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