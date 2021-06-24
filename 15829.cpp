// (string[i]-'a') * 31^(i-1)의 합임
// -'a'를 해야 아스키코드 숫자 범위가 됨(0~9) (소문자 입력된 기준)
#include <iostream>
#include<string>

#define	r 31
#define	M 1234567891

using namespace std;

int L;	//문자열의 길이
string input;	//소문자 입력 받을거
//결과값과 31의 제곱 값이 매우 크므로 long long 사용
unsigned long long Hash = 0;	//양수 범위를 두배로 늘림(음수, 부호비트 사용 x)
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