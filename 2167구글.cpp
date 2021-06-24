//구글링, 배열을 받은뒤 배열의 합을 어떻게 계산해야할지 모르겠다.
//DP, 동적계획법 사용(문제를 풀 때 하나의 문제를 여러 하위 문제로 나누어 풀고, 그것들을 결합해서 최종 목적에 도달하는 방식의 알고리즘)
#include <iostream>
using namespace std;

int n, m;	//배열크기 n, m
int arr[301][301];
int d[301][301];

void Input()
{
	cin >> n >> m;
}

void Solution()
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			d[i][j] = arr[i][j] + d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1];
		}
	}
	int k;
	cin >> k;
	while (k--) {
		int a, b, x, y;
		cin >> a >> b >> x >> y;
		cout << d[x][y] - d[a - 1][y] - d[x][b - 1] + d[a - 1][b - 1] << endl;
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