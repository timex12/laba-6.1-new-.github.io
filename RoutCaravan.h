#pragma once
#include<string>
#include<cstring>
#include"Game.h"
class RoutCaravan : public Game
{
	int start_location;//начало времени
	int end_location;//конец времени
	int time;//отметка времени, до которой караван должен прибыть в место назначения

public:

	RoutCaravan( int start_location, int end_location, int time);

	int Get_start();
	int Get_end();
	int Get_time();
	int getCoin();
	int getLocation();

	void Set_start(int newStart);
	void Set_end(int newend);
	void Set_time(int newtime);
	void setLocation(int id);
	void setCoin(int newcoin);

	void print() const override;
	void fill() override;
};
