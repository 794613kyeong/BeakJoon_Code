#include <iostream>
#include<string>
using namespace std;
string c;	//�ڸ�Ÿ�� �Է�
int n;	//�ڸ� ��
int result = 1;
int cnt = 0;
void Input()
{
	cin >> n >> c;

}

void Solution()
{
	for (int i = 0; i < n; i++)
	{
		if (c[i] == 'L')
		{
			if (cnt % 2 == 1) //ù��° L
			{
				cnt++;
				continue;
			}
			else //�ι�° L
			{
				cnt++;
				result += 1;

			}
		}
		else if (c[i] == 'S')
		{
			result += 1;
		}
	}
	//���ܵɸ��� �κ� ó��!
	//>> ��Ȧ���� ����� ���� ���� ��� ������ ���� ó���Ѵ�.
	//(�ش� ���� �ٿ� �ɾ��� �� ���� ���� �� �ִ� �ִ� ����� ���� ���ϹǷ�)
	if (result > n)
		result = n;
	cout << result;

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