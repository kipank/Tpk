#include<iostream>
#include"ships.h"
#include<Windows.h>
#include<vector>
#include<fstream>


using namespace std;
int main(void)
{
	setlocale(LC_ALL, "rus");
	vector <ships*> s; // база кораблей

	fstream f("port.txt");
	bool isopen_flag = true; // флаг того, что файл с портом был открыт
	if (!f.is_open())
	{
		cerr << "Файл с базой кораблей не был открыт, будет создан новый файл..." << endl;
		isopen_flag = false;
	}
	f.close();
	int ans;
	while (1)
	{
		cout << "Введите индекс операции:\n|1| - Добавить военный корабль\n|2| - Добавить гражданский корабль" << endl;
		cout << "|3| - выгрузить существующие корабли из файла\n|4| - загрузить в файл текущую базу\n|0| - выйти" << endl;
		cin >> ans;
		switch (ans)
		{
			case 0:
			{
				cout << "Осуществляется выход из программы..." << endl;
				for (int i = 0; i < s.size(); i++)
				{
					delete s[i];
				}
				s.clear();
				
				return 0;
			}
			case 1:
			{
				s.push_back(new warShips());
				s[s.size()-1]->createShip();
				s[s.size() - 1]->getShip(cout);
				break;
			}
			case 2:
			{
				s.push_back(new CivilianShip());
				s[s.size() - 1]->createShip();
				s[s.size() - 1]->getShip(cout);
				break;
			}
			case 3:
			{
				if (isopen_flag == false)
				{
					cerr << "Ошибка открытия файла, создайте новый порт с блэкджеком и шлюпками" << endl;
					break;
				}
				else
				{
					
					f.open("port.txt", ios_base::in);
					string fstring;
					getline(f, fstring);
					if (fstring.empty()) { cerr << "Файл пуст, добавьте кораблей, капитан!.." << endl; }
					while (!fstring.empty())
					{
						cout << fstring << endl;
						getline(f,fstring);
					}
					f.close();
				}
				break;
			}
			case 4:
			{
				f.open("port.txt", ios_base::app);
				for (int i = 0; i < s.size(); i++)
				{
					s[i]->getShip(f);
				}
				f.close();
				cout << "Файл загружен." << endl;
				break;
			}
		}
		cin.get(); cin.get();
		system("cls");
	}

	cin.get(); cin.get();
	return 0;
}
