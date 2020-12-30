#pragma once
#include<iostream>
#include<string>

using namespace std;
//абстрактный класс с общими свойствами и методами гражданских и военных судов
class ships
{
	string type;				//тип корабля
	string ship_class;			//класс 
	string special;				//специальность, если нет специального назначения -none
	float lenght=-1;				//длина, часть габаритов
	float width=-1;				//ширина, часть габаритов
	string area;				//район плавания
	string en_type;				//тип энергетической установки
	int displacement=-1;		//водоизмещение
	float capacity=-1;				//вместимость
	int crew=-1;					// экипаж
	int passengers=-1;				//пассажиры
	float speed=-1;				//скорость
public:
	 virtual void setType() = 0;				
	 virtual void setClass() = 0;
	 virtual void setSpecial() = 0;
	 virtual void setArea() = 0;
	 virtual void setEnergy() = 0;
	 virtual void setDisplacement() = 0;
	 virtual void setDimensions() = 0;
	 virtual void setCapacity() = 0;
	 virtual void setSpeed() = 0;
	 virtual void setCrew() = 0;
	 virtual void setPassengers() = 0;
	 void createShip();

	 void getShip(ostream& out);
	 friend class CivilianShip;
	 friend class warShips;
};


class CivilianShip // пассажирское судно
	:public ships
{
public:
	void setType()override;
	void setClass()override;
	 void setSpecial()override;
	 void setArea()override;
	 void setEnergy()override;
	 void setDisplacement()override;
	 void setDimensions()override;
	 void setCapacity()override;
	 void setSpeed()override;
	 void setCrew()override;
	 void setPassengers()override;

};



//класс военных кораблей
class warShips :
	public ships
{
public:
	void setType()override;
	void setClass()override;
	void setSpecial()override;
	void setArea()override;
	void setEnergy()override;
	void setDisplacement()override;
	void setDimensions()override;
	void setCapacity()override;
	void setSpeed()override;
	void setCrew()override;
	void setPassengers()override;
};
