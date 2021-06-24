//구글링 함,  (y+26) - x를 못하겠음
#include <iostream>
#include <string>
using namespace std;

int T;
string x, y;
void Input()
{
	cin >> T;	//테스트 케이스 수
}

void Solution()
{
	for (int i = 0; i < T; i++)
	{
		cin >> x >> y;	//
		int *arr = new int[x.size()];	//포인트 객체 생성, ary에 거리값 저장됨
		for (int i = 0; i < x.size(); i++)
		{
			if (y[i] >= x[i])	// y가 더 크면
				arr[i] = y[i] - x[i];
			else if (y[i] < x[i])	//x가 더 크면
				arr[i] = y[i] + 26 - x[i];
		}
		cout << "Distances: ";
		for (int i = 0; i < x.size(); i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
	}
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