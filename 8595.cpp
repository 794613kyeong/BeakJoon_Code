//���۸�, ���� ����ѹ����� ���ؾ��ϴµ� ���� �ڷ����� ���� �𸣰ڴ�.
#include <iostream>
#define MAX 50000001
using namespace std;

char str[MAX];

int n;
int num;
long long sum = 0, res = 0;
int d = 1;

void Input()
{
	cin >> n >> str;
}

void Solution()
{
	// �� ������ �ڸ����� ����ؼ� ���ؾ� �ϹǷ� �Ųٷ� ����ؼ� ���� ã��
	for (int i = n - 1; i >= 0; i--) {
		// ���� �ѹ��� 6�ڸ��� ���� �ʴ´ٴ� �κа� ù ���ڰ� ������ ���
		if (i == 0) {
			if ('0' <= str[i] && str[i] <= '9') {	// ������ ��� ���� -> ����
				num = str[i] - '0';
				sum += num * d;
				d *= 10;
				if (sum > 999999) sum = 0;
				res += sum;
			}
		}
		if ('0' <= str[i] && str[i] <= '9') {	// ������ ��� ���� -> ����
			num = str[i] - '0';
			sum += num * d;
			d *= 10;
		}
		else {
			d = 1;
			if (sum > 999999) sum = 0;
			else {
				res += sum;
				sum = 0;
			}
		}
	}
	cout << res << endl;
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