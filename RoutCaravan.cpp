#include"RoutCaravan.h"
#include"Game.h"
#include<iostream>
using namespace std;

RoutCaravan::RoutCaravan(int start_location, int end_location, int time):Game()
{
	this->time = 1;
	this->start_location = 1;
	this->end_location = 1;
}

int RoutCaravan::Get_start()
{
	return start_location;
}

int RoutCaravan::Get_end()
{
	return end_location;
}

int RoutCaravan::Get_time()
{
	return time;
}

int  RoutCaravan::getCoin()
{
	return coin;
}

int RoutCaravan::getLocation()
{
	return id_location;
}


void RoutCaravan:: Set_start(int newStart)
{
	
		start_location = newStart;
	
}

void RoutCaravan::Set_end(int newend)
{
		end_location = newend;
	
}

void RoutCaravan::Set_time(int newtime)
{
	time = newtime;
}

void RoutCaravan::setCoin(int newcoin)
{
	Game::setCoin(newcoin);
}

void RoutCaravan::setLocation(int id)
{
	Game::setLocation(id);
}

void RoutCaravan::print()const
{
	Game::print();
	cout << " id start: " << this->start_location<<endl;
	cout << "id end: " << this->end_location << endl;
	cout << "the time(sec) stamp: " << this->time << endl;
}

void RoutCaravan::fill()
{
	Game::fill();

	cout << " enter time: ";
	cin >> this->time;
	cin.ignore();

	cout << "enter id start: ";
	cin >> this->start_location;
	cin.ignore();

	cout << "enter id end: ";
	cin >> this->end_location;
	cin.ignore();
}