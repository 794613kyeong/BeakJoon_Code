//���۸� ��,  (y+26) - x�� ���ϰ���
#include <iostream>
#include <string>
using namespace std;

int T;
string x, y;
void Input()
{
	cin >> T;	//�׽�Ʈ ���̽� ��
}

void Solution()
{
	for (int i = 0; i < T; i++)
	{
		cin >> x >> y;	//
		int *arr = new int[x.size()];	//����Ʈ ��ü ����, ary�� �Ÿ��� �����
		for (int i = 0; i < x.size(); i++)
		{
			if (y[i] >= x[i])	// y�� �� ũ��
				arr[i] = y[i] - x[i];
			else if (y[i] < x[i])	//x�� �� ũ��
				arr[i] = y[i] + 26 - x[i];
		}
		cout << "Distances: ";
		for (int i = 0; i < x.size(); i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
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