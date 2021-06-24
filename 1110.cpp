#include <iostream>
using namespace std;

int num, n1, n2; //입력받을 변수, 첫째, 둘째 자리 
int sum;
int res = 0; // 사이클을 위한 결과 
int cnt = 0; // 사이클 횟수 

void Input()
{
	cin >> num;
}
void Solution()
{	
	if (num < 0 || num>90)
		Input();
	if (num < 10)
		num *= 10; res = num;
	while (1)
	{
		n1 = res / 10; 
		n2 = res % 10;
		sum = n1 + n2;
		res = (n2 * 10) + (sum % 10);
		cnt++; 
		if (num == res)	//사이클 값과 입력값이 같을때 반복문 탈출 
			break;
	}
	cout << cnt;
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