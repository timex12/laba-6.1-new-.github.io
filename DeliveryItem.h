#pragma once
#include"Game.h"
class DeliveryItem : public Game
{
	
	int location_customer; //идентификатор локации расположения заказчика
	int item; //идентификатор заказываемого предмета

public:

	DeliveryItem(int coin, int location_customer, int item) ;
	
	int Get_locationC();
	int Get_item();
	int getCoin();
	int getLocation();

	void Set_locationC(int newlocationC);
	void Set_Item(int newItem);
	void setLocationC(int id);
	void setCoin(int newcoin);

	virtual void print() const;
	virtual void fill();
};