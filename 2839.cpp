#include <iostream>
using namespace std;

int N;	// kg
int first, second;	//5kg, 3kg ���� ����
void Input()
{
	cin >> N;
}
void Solution()
{
	first = N / 5;	// 5kg ���� ����

	while (1)
	{
		if (first < 0)	// ������ �������� �ʴ� ��
		{
			cout << "-1";
			exit(0);
		}
		if ((N - (5 * first)) % 3 == 0)	// 3kg���� �������� ���� ���� ���ϱ� (N-(5*first)�ؼ� N%5���� ����)
		{
			second = (N - (5 * first)) / 3;
			break;
		}
		first--;	// 1���� �����ϸ鼭 �ݺ�
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