#include <iostream>
using namespace std;

int num, n1, n2; //�Է¹��� ����, ù°, ��° �ڸ� 
int sum;
int res = 0; // ����Ŭ�� ���� ��� 
int cnt = 0; // ����Ŭ Ƚ�� 

void Input()
{
	cin >> num;
}
void Solution()
{	
	if (num < 0 || num>90)
		Input();
	if (num < 10)
		num *= 10; res = num;
	while (1)
	{
		n1 = res / 10; 
		n2 = res % 10;
		sum = n1 + n2;
		res = (n2 * 10) + (sum % 10);
		cnt++; 
		if (num == res)	//����Ŭ ���� �Է°��� ������ �ݺ��� Ż�� 
			break;
	}
	cout << cnt;
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