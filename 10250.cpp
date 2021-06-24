#include <iostream>

using namespace std;

int Check_in;
int H, W, N;	// 호텔의 층수, 방수, N번째 손님
int Floor, Room;

void Input()
{
	cin >> Check_in;
}
void Solution()
{
	for (int i = 0; i < Check_in; i++)
	{
		cin >> H;
		cin >> W;
		cin >> N;

		Floor = N % H;	//층수 구함
		Room = N / H + 1;	// 호실 구함

		if (Floor == 0) {	//0층은 없음, 0나오면 
			Floor = H;
		}
		if (!(N % H)) {
			Room -= 1;
		}
		cout << Floor * 100 + Room << endl;
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