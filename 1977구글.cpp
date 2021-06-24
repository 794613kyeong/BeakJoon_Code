// ���� �ۼ��� �ڵ尡 �����ϰ� �ּҰ��� �� �������� ���۸� ��
#include <iostream>
#include<string>

using namespace std;

int M, N;	// M�̻� N����
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
		if (j*j >= M && j*j <= N)	//�ִ밪
		{
			sum += j * j;
			cnt++;
		}
		if (j*j >= M && j*j <= N && j*j < min)	// �ּڰ�, j*j < min(�������� �־��� ���Ѱ�)�ؼ� �� �ѹ� ���� �� ����
		{
			min = j * j;

		}
	}
	if (cnt == 0)	// ������������ ���� ���
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