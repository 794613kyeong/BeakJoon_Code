//���ڸ� ���ϴ¹��� ��, �����ѹ��� ��� ����� ���� ���۸� �Ͽ���
#include <iostream>
using namespace std;

int ary[10000] = { 1, };
int temp;
//void Input()
//{
//
//}
void Solution()
{
	//�� �ڸ����� if������ ������ ó��, ���� �ѹ��� �ƴ� ������ ��� ã�� ������� �����Ͽ���.
	for (int i = 1; i < 10000; i++) {
		if (i < 10) {//2,4,6,8,10,12...
			ary[i + i] = 1;
			continue;
		}
		else if (i < 100) {//�����ڸ� �� + �����ڸ� ��
			ary[i + i / 10 + i % 10] = 1;
			continue;
		}
		else if (i < 1000) {//�����ڸ� �� + �����ڸ� �� + �����ڸ� ��
			ary[i + i / 100 + i % 100 / 10 + i % 10] = 1;
			continue;
		}
		else if (i < 10000) {//õ���ڸ� �� + �����ڸ� �� + �����ڸ� �� + �����ڸ� ��
			temp = i + i / 1000 + i % 1000 / 100 + i % 100 / 10 + i % 10;
			if (temp < 10000) {
				ary[temp] = 1;
				continue;
			}
		}
	}
	for (int i = 1; i < 10000; i++)
		if (!ary[i])
			cout << i << "\n";
}
void Solve()
{
	//Input();
	Solution();
}

int main()
{
	ios::sync_with_stdio(false);
	//cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}