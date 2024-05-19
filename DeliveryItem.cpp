#include"DeliveryItem.h"
#include"Game.h"
#include<iostream>
using namespace std;

DeliveryItem::DeliveryItem(int coin,  int location_customer, int item) 
{
	if (item > 1 || item<=10000)
	{
		this->item = item;
	}
	else
	{
		cout << "error item";
		this->item = 1;
		
	}
	this->location_customer = location_customer;
	this->item = item;
}




int DeliveryItem::Get_locationC()
{
	return location_customer;
}

int DeliveryItem::Get_item()
{
	return item;
}

int  DeliveryItem::getCoin()
{
	return coin;
}

int DeliveryItem::getLocation()
{
	return id_location;
}

void  DeliveryItem::Set_Item(int newItem)
{
	if (newItem > 0)
	{
		item = newItem;
	}
}

void  DeliveryItem::Set_locationC(int newlocationC)
{
	if (newlocationC > 1 || newlocationC<=1000000)
	{
		location_customer = newlocationC;
	}
	else
	{
		location_customer = 1;
	}
}

void DeliveryItem::setCoin(int newcoin)
{
	Game::setCoin(newcoin);
}

void DeliveryItem::print() const 
{

	cout << "customer location identifier: " << this->location_customer << endl;
	cout << "ID of the item being ordered: " << this->item << endl;
}

void DeliveryItem::fill()
{
	Game::fill();
	cout << "enter item: ";
	cin >> this->item;
	cin.ignore();

	cout << "enter customer location:";
	cin >> this->location_customer;
	cin.ignore();
}