#include <iostream>
#include <string>
#include <math.h>
#include <ctime>
using namespace std;

int main()
{
		//p.115 no.1
	/*string a, b;

	cout << "ù ��° ���ڿ�: ";
	cin >> a;
	cout << "�� ��° ���ڿ�: ";
	cin >> b;

	if (a == b)
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	else
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;

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

	cout << "�ʱ� �ݾ� $" << money << endl;
	cout << "��ǥ �ݾ� $" << mokpyo << endl;

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
	cout << "1000 ���� " << wins << "�� �¸�" << endl;
	cout << "�̱� Ȯ��=" << wins / 1000.0 * 100.0 << endl;
	cout << "��� ���� Ƚ�� = " << total / 1000.0 << endl;

	return 0;
}
