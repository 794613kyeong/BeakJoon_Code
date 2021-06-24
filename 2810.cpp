#include <iostream>
#include<string>
using namespace std;
string c;	//자리타입 입력
int n;	//자리 수
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
			if (cnt % 2 == 1) //첫번째 L
			{
				cnt++;
				continue;
			}
			else //두번째 L
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
	//예외될만한 부분 처리!
	//>> 컵홀더가 사람수 보다 많을 경우 다음과 같이 처리한다.
	//(해당 극장 줄에 앉았을 때 컵을 꽂을 수 있는 최대 사람의 수를 구하므로)
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