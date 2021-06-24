//틀려서 구글링, 바보같이 경우의 수를 수동적으로 따져서 풀려 하였다. 수학 공부 먼저 하자..ㅠㅠ
// 7 2	// 7 5
// 2 6	// 1 1
#include <iostream>
using namespace std;

int A, W, C, D;
int result;
void Input()
{
	cin >> A >> W >> C >> D;
}

void Solution()
{
	result = (W + C) < (A + D) ? (W + C) : (A + D);
	cout << result << '\n';
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
//#include <iostream>
//#include<algorithm>
//using namespace std;
//int A, B, C, D;
//int cnt = 0;
//int many, small;
//void Input()
//{
//	cin >> A >> B >> C >> D;
//}
//
//void Soulution2()//사과==오렌지
//{
//	cnt += A + D;
//	cout << cnt;
//	exit(0);
//}
//void Soulution3()//바구니1==바구니2
//{
//	cnt += min(A, B);
//	cnt += D;
//	cout << cnt;
//	exit(0);
//}
//void Solution()
//{	
//	if (A + C == B + D)
//		Soulution2();
//	if (A == B || C == D)
//		Soulution3();
//	else
//	{	
//		if (A + C < B + D)//사과<오렌지
//		{
//			cnt += min(A, B);//바구니1에서 작은과일 찾기
//			if (cnt == A)//사과일 경우
//			{
//				cnt += D;
//				cout << cnt;
//				exit(0);
//			}
//			else if (cnt == B)	//오렌지일 경우
//			{
//				cnt += C;
//				cout << cnt;
//			}
//		}
//		else//사과>오렌지
//		{
//			cnt += min(A, B);
//			if (cnt == A)
//			{
//				cnt += D;
//				cout << cnt;
//				exit(0);
//			}
//			else if (cnt == B)
//			{
//				cnt += C;
//				cout << cnt;
//			}
//		}
//	}
//}
//void Solve()
//{
//	Input();
//	Solution();
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	Solve();
//	return 0;
//}