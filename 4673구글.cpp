//각자리 더하는법은 앎, 셀프넘버를 어떻게 골라낼지 몰라 구글링 하였음
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
	//각 자리수를 if문으로 나눠서 처리, 셀프 넘버가 아닌 값들을 모두 찾는 방식으로 접근하였다.
	for (int i = 1; i < 10000; i++) {
		if (i < 10) {//2,4,6,8,10,12...
			ary[i + i] = 1;
			continue;
		}
		else if (i < 100) {//십의자리 수 + 일의자리 수
			ary[i + i / 10 + i % 10] = 1;
			continue;
		}
		else if (i < 1000) {//백의자리 수 + 십의자리 수 + 일의자리 수
			ary[i + i / 100 + i % 100 / 10 + i % 10] = 1;
			continue;
		}
		else if (i < 10000) {//천의자리 수 + 백의자리 수 + 십의자리 수 + 일의자리 수
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