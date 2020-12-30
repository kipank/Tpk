#include "ships.h"
//методы класса ships
void ships::getShip(ostream& out)
{
	out << "Тип: " + type << endl;
	out << "Класс корабля: " + ship_class << endl;
	out << "Специальное назначение: " + special << endl;
	out << "Район плавания : " + area << endl;
	out << "Тип энергетической установки: " + en_type << endl;
	out << "Габариты: " << lenght << " x " << width << endl;
	out << "Водоизмещение: " << displacement << "т" << endl;
	out << "Вместимость: " << capacity << "(т)" << endl;
	out << "Экипаж: " << crew << "чел." << endl;
	out << "Количество пассажиров: " << passengers << " чел." << endl;
	out << "Скорость: " << speed << " узлов" << endl;

}

void ships::createShip()
{
	setType();
	setClass();
	setSpecial();
	setArea();
	setEnergy();
	setDisplacement();
	setDimensions();
	setCapacity();
	setSpeed();
	setCrew();
	setPassengers();
}

//методы класса  гражданских кораблей 


void CivilianShip::setType()
{
point:
	try {
		cout << "Введите тип гражданского корабля: ";
		cin.get();
		getline(cin, type);
		cout << endl;
		for (int i = 0; i < type.length(); i++)
		{
			if (type[i] > 127 || type[i] < 0 || type.empty()) throw "Были введены некорректные данные.";
		}
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void CivilianShip::setClass()
{
point:
	try {
		cout << "Введите класс гражданского корабля: ";

		getline(cin, ship_class);
		cout << endl;
		for (int i = 0; i < ship_class.length(); i++)
		{
			if (ship_class[i] > 127 || ship_class[i] < 0 || ship_class.empty()) throw "Были введены некорректные данные.";
		}
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void CivilianShip::setSpecial()
{
point:
	try {
		cout << "Введите специальное назначение гражданского корабля(none, если такого нет): ";

		getline(cin, special);
		cout << endl;
		for (int i = 0; i < special.length(); i++)
		{
			if (special[i] > 127 || special[i] < 0 || special.empty()) throw "Были введены некорректные данные.";
		}
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void CivilianShip::setArea()
{
point:
	try {
		cout << "Введите район плавания: ";

		getline(cin, area);
		cout << endl;
		for (int i = 0; i < area.length(); i++)
		{
			if (area[i] > 127 || area[i] < 0 || area.empty()) throw "Были введены некорректные данные.";
		}
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void CivilianShip::setEnergy()
{
point:
	try {
		cout << "Введите тип энергетической установки гражданского корабля: ";

		getline(cin, en_type);
		cout << endl;
		for (int i = 0; i < en_type.length(); i++)
		{
			if (en_type[i] > 127 || en_type[i] < 0 || en_type.empty()) throw "Были введены некорректные данные.";
		}
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void CivilianShip::setDisplacement()
{
point:
	try {
		cout << "Введите объем водоизмещения(т): ";
		cin >> displacement;
		cout << endl;
		if (displacement <= 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void CivilianShip::setDimensions()
{
point:
	try {
		cout << "Введите длину гражданского корабля: ";
		cin >> lenght;
		cout << "Введите ширина гражданского корабля: ";
		cin >> width;
		cout << endl;
		if (lenght < 0) throw "Были введены некорректные данные.";
		if (width < 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void CivilianShip::setCapacity()
{
point:
	try {
		cout << "Введите вместимость(т): ";
		cin >> capacity;
		cout << endl;
		if (capacity < 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void CivilianShip::setSpeed()
{
point:
	try {
		cout << "Введите скорость (узлов): ";
		cin >> speed;
		cout << endl;
		if (capacity < 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void CivilianShip::setCrew()
{
point:
	try {
		cout << "Введите экипаж: ";
		cin >> crew;
		cout << endl;
		if (crew < 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void CivilianShip::setPassengers()
{
point:
	try {
		cout << "Введите количество пассажиров: ";
		cin >> passengers;
		cout << endl;
		if (crew < 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}

//методы класса военных кораблей 


void warShips::setType()
{
point:
	try {
		cout << "Введите тип военного корабля: ";
		cin.get();
		getline(cin, type);
		cout << endl;
		for (int i = 0; i < type.length(); i++)
		{
			if (type[i] > 127 || type[i] < 0 || type.empty()) throw "Были введены некорректные данные.";
		}
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void warShips::setClass()
{
point:
	try {
		cout << "Введите класс военного корабля: ";
		;
		getline(cin, ship_class);
		cout << endl;
		for (int i = 0; i < ship_class.length(); i++)
		{
			if (ship_class[i] > 127 || ship_class[i] < 0 || ship_class.empty()) throw "Были введены некорректные данные.";
		}
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void warShips::setSpecial()
{
point:
	try {
		cout << "Введите специальное назначение военного корабля(none, если такого нет): ";

		getline(cin, special);
		cout << endl;
		for (int i = 0; i < special.length(); i++)
		{
			if (special[i] > 127 || special[i] < 0 || special.empty()) throw "Были введены некорректные данные.";
		}
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void warShips::setArea()
{
point:
	try {
		cout << "Введите район плавания: ";

		getline(cin, area);
		cout << endl;
		for (int i = 0; i < area.length(); i++)
		{
			if (area[i] > 127 || area[i] < 0 || area.empty()) throw "Были введены некорректные данные.";
		}
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void warShips::setEnergy()
{
point:
	try {
		cout << "Введите тип энергетической установки военного корабля: ";

		getline(cin, en_type);
		cout << endl;
		for (int i = 0; i < en_type.length(); i++)
		{
			if (en_type[i] > 127 || en_type[i] < 0 || en_type.empty()) throw "Были введены некорректные данные.";
		}
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void warShips::setDisplacement()
{
point:
	try {
		cout << "Введите объем водоизмещения: ";
		cin >> displacement;
		cout << endl;
		if (displacement <= 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void warShips::setDimensions()
{
point:
	try {
		cout << "Введите длину военного корабля: ";
		cin >> lenght;
		cout << "Введите ширина военного корабля: ";
		cin >> width;
		cout << endl;
		if (lenght < 0) throw "Были введены некорректные данные.";
		if (width < 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void warShips::setCapacity()
{
point:
	try {
		cout << "Введите вместимость(т): ";
		cin >> capacity;
		cout << endl;
		if (capacity < 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void warShips::setSpeed()
{
point:
	try {
		cout << "Введите скорость (узлов): ";
		cin >> speed;
		cout << endl;
		if (capacity < 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void warShips::setCrew()
{
point:
	try {
		cout << "Введите экипаж: ";
		cin >> crew;
		cout << endl;
		if (crew < 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
void warShips::setPassengers()
{
point:
	try {
		cout << "Введите количество пассажиров: ";
		cin >> passengers;
		cout << endl;
		if (crew < 0) throw "Были введены некорректные данные.";
	}
	catch (const char* a)
	{
		cerr << a << endl;
		cerr << "Попробуйте ввести данные еще раз. " << endl; goto point;
		goto point;
	}
}
