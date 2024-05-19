#pragma once
#include"Game.h"
class MonsterKill : public Game
{
	int location_monster;
	int type_monster; //идентификатор типа монстров
	int count_monster;// количество монстров указанного типа

public:
	MonsterKill(int location_monster, int type_monster, int count_monster);
	

	int Get_locationM();
	int Get_typeM();
	int Get_countM();
	int getCoin();
	int getLocation();
	
	void Set_location(int newlocation_monster);
	void Set_typeM(int newtype);
	void Set_countM(int newcount);
	void setLocation(int id);
	void setCoin(int newcoin);

	void print() const;
    void fill();
	
};