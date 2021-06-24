// (string[i]-'a') * 31^(i-1)�� ����
// -'a'�� �ؾ� �ƽ�Ű�ڵ� ���� ������ ��(0~9) (�ҹ��� �Էµ� ����)
#include <iostream>
#include<string>

#define	r 31
#define	M 1234567891

using namespace std;

int L;	//���ڿ��� ����
string input;	//�ҹ��� �Է� ������
//������� 31�� ���� ���� �ſ� ũ�Ƿ� long long ���
unsigned long long Hash = 0;	//��� ������ �ι�� �ø�(����, ��ȣ��Ʈ ��� x)
unsigned long long e = 1;

void Input()
{
	cin >> L >> input;
}

void Solution()
{
	for (int i = 0; i < L; i++)
	{
		Hash = (Hash + (input[i] - 'a' + 1) * e) % M;
		e = (e * r) % M;
	}
	cout << Hash << endl;
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