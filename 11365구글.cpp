//�Ųٷ� ��� ���� ����, getline���� ���� ���� �Է� ���� ��, �Ųٷ� ����ϱ�
#include <iostream>
#include <string>
using namespace std;

//void Input()
//{
//
//}

void Solution()
{
	while (1)
	{
		string s;
		getline(cin, s);

		if (s == "END")
			break;

		for (int i = s.length() - 1; i >= 0; i--)	//�Ųٷ� ���
			cout << s[i];
		cout << "\n";
	}
}
void Solve()
{
	//Input();
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