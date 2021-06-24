//���۸�, �Ǻ���ġ �˰��� �ɼ����� �ʾ� ���۸� �Ͽ����ϴ�.
//�Ǻ���ġ dp�� Ǯ��
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
		dp1[i] = dp1[i - 1] + dp1[i - 2]; // �Ǻ���ġ ���� ���մϴ�.
		// ���⼭�� i ��°�� ���簢���� �� ���� ����
	}
	dp2[1] = 4;
	for (int i = 2; i <= 80; i++) {
		dp2[i] = dp2[i - 1] + dp1[i] * 2; // �ѷ��� ���̴� �� �簢���� �ѷ��� 
		// ���� ���簢�� �� ���ϱ� 2�� ���Ѱ��Դϴ�.
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