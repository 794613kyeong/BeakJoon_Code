//���۸�, �迭�� ������ �迭�� ���� ��� ����ؾ����� �𸣰ڴ�.
//DP, ������ȹ�� ���(������ Ǯ �� �ϳ��� ������ ���� ���� ������ ������ Ǯ��, �װ͵��� �����ؼ� ���� ������ �����ϴ� ����� �˰���)
#include <iostream>
using namespace std;

int n, m;	//�迭ũ�� n, m
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