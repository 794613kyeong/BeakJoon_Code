#include<iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input[8];
	int as = 0, de = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> input[i];
		if (input[i] == i + 1)
			as++;
		else if (input[i] == 8 - i)
			de++;
	}
	if (as == 8)
		cout << "ascending";
	else if (de == 8)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}