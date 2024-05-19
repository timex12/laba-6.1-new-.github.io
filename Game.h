#pragma once

class Game
{
protected:

	int coin; //кол-во монет
	int id_location;

public:

	Game(/*int coin*/);/*: coin_gold(coin){}*/
	int getCoin();
	int getLocation();

	void setLocation(int id);
	void setCoin(int newcoin);
	

	virtual void print() const;
	virtual void fill();
};
