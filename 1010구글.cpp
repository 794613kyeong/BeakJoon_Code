//���۸� �Ͽ���, ��ȭ��(������ �Ϲ����� �� �� �̻��� �ռ� �׵��� �̿��Ͽ� ��Ÿ�� ��)�� �߸�����, ȸ�ǽð��� Ǯ�� ��û�� ��,,
#include <iostream>
#include <cmath>
#include<string>
#include<algorithm>
using namespace std;
int T;	// �׽�Ʈ ���̽� ����
int N, M;	//���ʻ���Ʈ, ���ʻ���Ʈ
int DP[33][33] = { 0 };	// DP�迭 �ʱ�ȭ
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
			for (int j = 2; j <= M; j++)	//j�� i���� �׻� ũ�ų� �����ؼ� i=j�ϸ� �ȵ�(��ȭ�� �� ��ŵ�ϴ� ��Ȳ�� ����)
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