//구글링 하였음, 점화식(수열의 일반항을 한 개 이상의 앞선 항들을 이용하여 나타낸 식)을 잘몰랐음, 회의시간에 풀이 요청할 것,,
#include <iostream>
#include <cmath>
#include<string>
#include<algorithm>
using namespace std;
int T;	// 테스트 케이스 개수
int N, M;	//서쪽사이트, 동쪽사이트
int DP[33][33] = { 0 };	// DP배열 초기화
void Input()
{
	cin >> T;
}
void Solution()
{
	while (T--)
	{
		cin >> N >> M;
		for (int i = 1; i <= M; i++)
			DP[1][i] = i;
		for (int i = 2; i <= N; i++)
		{
			for (int j = 2; j <= M; j++)	//j가 i보다 항상 크거나 같다해서 i=j하면 안됨(점화식 중 스킵하는 상황이 생김)
			{
				DP[i][j] = DP[i - 1][j - 1] + DP[i][j - 1];// DP[3][4] = DP[2][3] + DP[3][3]
			}
		}
		cout << DP[N][M] << endl;
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