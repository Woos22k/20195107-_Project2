#include <iostream>
#include <string>
#include <math.h>
#include <ctime>
using namespace std;

int main()
{
		//p.115 no.1
	/*string a, b;

	cout << "첫 번째 문자열: ";
	cin >> a;
	cout << "두 번째 문자열: ";
	cin >> b;

	if (a == b)
		cout << "2개의 문자열은 같습니다." << endl;
	else
		cout << "2개의 문자열은 다릅니다." << endl;

	return 0;*/
		//p.117 no.10
	/*for (int a = 1; a < 100; a++)
		for (int b = 1; b < 100; b++)
			for (int c = 1; c < 100; c++)
				if (pow(a, 2) + pow(b, 2) == pow(c, 2))
					cout << a << " " << b << " " << c << endl;

	return 0;*/
		//p.120 no.16
	int money = 50;
	const int mokpyo = 250;

	int bets, won;
	bool result;
	int wins = 0;
	int total = 0;

	srand((unsigned int)time(NULL));

	cout << "초기 금액 $" << money << endl;
	cout << "목표 금액 $" << mokpyo << endl;

	for (int game = 0; game < 1000; game++)
	{
		money = 50, bets = 0, won = 0;
		while (true)
		{
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
			{
				money++;
				won++;
			}
			else
				money--;

			if (money <= 0)
			{
				result = false;
				break;
			}
			if (money >= mokpyo)
			{
				result = true;
				break;
			}
		}
		if (result == true)
			wins++;
		total += bets;
	}
	cout << "1000 중의 " << wins << "번 승리" << endl;
	cout << "이긴 확률=" << wins / 1000.0 * 100.0 << endl;
	cout << "평균 배팅 횟수 = " << total / 1000.0 << endl;

	return 0;
}
