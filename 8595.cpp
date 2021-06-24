//구글링, 받은 히든넘버들을 비교해야하는데 무슨 자료형을 쓸지 모르겠다.
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
	// 각 숫자의 자릿수를 계산해서 더해야 하므로 거꾸로 출력해서 숫자 찾음
	for (int i = n - 1; i >= 0; i--) {
		// 히든 넘버는 6자리를 넘지 않는다는 부분과 첫 문자가 숫자일 경우
		if (i == 0) {
			if ('0' <= str[i] && str[i] <= '9') {	// 숫자일 경우 문자 -> 정수
				num = str[i] - '0';
				sum += num * d;
				d *= 10;
				if (sum > 999999) sum = 0;
				res += sum;
			}
		}
		if ('0' <= str[i] && str[i] <= '9') {	// 숫자일 경우 문자 -> 정수
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