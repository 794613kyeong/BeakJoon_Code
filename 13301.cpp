//구글링, 피보나치 알고리즘에 능숙하지 않아 구글링 하였습니다.
//피보나치 dp로 풀이
#include <iostream>
using namespace std;

long long dp1[81];
long long dp2[81];
int n;
void Input()
{
	cin >> n;
}

void Solution()
{
	dp1[1] = 1, dp1[2] = 1;
	for (int i = 3; i <= 80; i++) {
		dp1[i] = dp1[i - 1] + dp1[i - 2]; // 피보나치 값을 구합니다.
		// 여기서는 i 번째의 정사각형의 한 변의 길이
	}
	dp2[1] = 4;
	for (int i = 2; i <= 80; i++) {
		dp2[i] = dp2[i - 1] + dp1[i] * 2; // 둘레의 길이는 전 사각형의 둘레에 
		// 현재 정사각형 변 곱하기 2를 더한값입니다.
	}
	cout << dp2[n] << endl;
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