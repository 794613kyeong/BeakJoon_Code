//��������, ���ڿ��� �Է� ���� �� ��� �ؾ����� �𸣰���
#include <iostream>
#include<string>
using namespace std;

string FBI[6];
string sol = "";
//void Input()
//{
//}

void Solution()
{
	for (int i = 1; i <= 5; i++)
	{
		cin >> FBI[i];
		//find�Լ��� ��ġ�� ��ȯ�Ѵ�. �̴� int ���� �ƴϰ� iterator���̴�.
		if (FBI[i].find("FBI") == string::npos)//����, ã�� ���ڿ��� ���ٸ�
			continue;
		else
			sol += to_string(i);
	}
	if (sol.size() == 0)
		cout << "HE GOT AWAY!" << endl;
	else
	{
		for (int i = 0; i < sol.size(); i++)
			cout << sol[i] << ' ';
	}
}
void Solve()
{
//	Input();
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