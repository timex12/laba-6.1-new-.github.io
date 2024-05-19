#include"SecurityCaravan.h"
#include"Game.h"
#include<iostream>
using namespace std;

SecurityCaravan::SecurityCaravan( int count_security):Game()
{
	this->count_security = 1;
}
	/*:Game(coin), start_location(start_location), count_security(count_security) {}*/


int SecurityCaravan::Get_countS()
{
	return count_security;
}



int SecurityCaravan::getLocation()
{
	return id_location;
}

int  SecurityCaravan::getCoin()
{
	return coin;
}

void SecurityCaravan::Set_countS(int newcount)
{
	count_security = newcount;
}

void SecurityCaravan::setLocation(int id)
{
	Game::setLocation(id);
}

void SecurityCaravan::setCoin(int newcoin)
{
	Game::setCoin(newcoin);
}

void SecurityCaravan::print() const
{
	Game::print();

	cout << "cout security: " << this->count_security << endl;

}

void SecurityCaravan::fill()
{
	Game::fill();
	cout << " count if the security:";
	cin >> this->count_security;
	cin.ignore();
}