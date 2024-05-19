#pragma once
#include"Game.h"
class SecurityCaravan : public Game
{
	
	int count_security;// количество охранников

public:

	SecurityCaravan(int count_security);
	void print() const;
	void fill();

	int Get_countS();
	int getCoin();
	int getLocation();

	
	void Set_countS(int newcount);
	void setLocation(int id);
	void setCoin(int newcoin);
	

};
