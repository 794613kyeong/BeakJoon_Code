//구글참고, 문자열로 입력 받은 뒤 어떻게 해야할지 모르겠음
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
		//find함수는 위치를 반환한다. 이는 int 값이 아니고 iterator값이다.
		if (FBI[i].find("FBI") == string::npos)//만약, 찾는 문자열이 없다면
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