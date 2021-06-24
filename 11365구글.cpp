//거꾸로 출력 몰라서 구글, getline으로 한줄 한줄 입력 받은 뒤, 거꾸로 출력하기
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

		for (int i = s.length() - 1; i >= 0; i--)	//거꾸로 출력
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