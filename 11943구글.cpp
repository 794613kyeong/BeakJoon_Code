//Ʋ���� ���۸�, �ٺ����� ����� ���� ���������� ������ Ǯ�� �Ͽ���. ���� ���� ���� ����..�Ф�
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
//void Soulution2()//���==������
//{
//	cnt += A + D;
//	cout << cnt;
//	exit(0);
//}
//void Soulution3()//�ٱ���1==�ٱ���2
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
//		if (A + C < B + D)//���<������
//		{
//			cnt += min(A, B);//�ٱ���1���� �������� ã��
//			if (cnt == A)//����� ���
//			{
//				cnt += D;
//				cout << cnt;
//				exit(0);
//			}
//			else if (cnt == B)	//�������� ���
//			{
//				cnt += C;
//				cout << cnt;
//			}
//		}
//		else//���>������
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