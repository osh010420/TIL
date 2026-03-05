#include <iostream>
#define n 4

using namespace std;


void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
	*p_HPPotion = count;
	*p_MPPotion = count;
}


int main()
{
	int status[n];

	while (1)
	{
		cout << "hp와 mp를 입력하세요 : ";
		cin >> status[0] >> status[1];
		if (status[0] <= 50 || status[1] <= 50)
		{
			cout << "다시 입력하세요." << endl;
		}
		else
			break;
	}
	while (1)
	{
		cout << "공격력과 방어력을 입력하세요 : ";
		cin >> status[2] >> status[3];

		if (status[2] <= 0 || status[3] <= 0)
		{
			cout << "다시 입력하세요." << endl;
		}
		else
			break;
	}

	int HPPotion = 0;
	int MPPotion = 0;
	setPotion(5, &HPPotion, &MPPotion);
	cout << "* 포션이 지급되었습니다. (HP, MP 포션 각 5개)" << endl
		<< "=======================================" << endl;

	int choose = 0;
	int Att = status[2];
	int Def = status[3];
	while (1)
	{
		cout << "번호를 선택해주세요 : " << endl <<
			"1.HP up" << endl << "2. MP UP" << endl << "3. 공격력 UP" << endl << "4. 방어력 up" 
			<< endl << "5. 현재 능력치" << endl << "6. Level up" << endl << "0. 나가기" << endl;
		cin >> choose;

		if (choose == 0)
		{
			cout << "프로그램 종료" << endl;
			break;

		}
		switch (choose) 
		{
			case 1:
				if (HPPotion < 1)
				{
					cout << "주의! 포션이 0개면 사용할 수 없습니다." << endl;
					continue;
				}
				--HPPotion;
				++status[0];
				break;

			case 2:
				if (MPPotion < 1)
				{
					cout << "주의! 포션이 0개면 사용할 수 없습니다." << endl;
					continue;
				}
				--MPPotion;
				++status[1];
				break;
			case 3:
				Att *= 2;
				break;
			case 4:
				Def *= 2;
				break;
			case 5:
				cout << "HP : " << status[0] << endl << "MP : " << status[1] << endl
					<< "공격력 : " << Att << endl << "방어력 : " << Def << endl;
				break;
			case 6:
				cout << "레벨 업! 포션을 하나씩 획득합니다." << ++HPPotion << ++MPPotion << endl;
				break;
			default:
				break;
		}
	}
	return 0;
}