#pragma once
#include<iostream>
#include"Game.h"
using namespace std;

Game::Game()
{
	id_location = 1;
	coin = 1;
}

void Game::setLocation(int id)
{
	id_location = id;
}

void Game::setCoin(int newcoin)
{
	coin = newcoin;
}

int Game::getCoin()
{
	return coin;
}

int Game::getLocation()
{
	return id_location;
}

void Game::fill()
{
	cin.ignore();
	cout << " ID location: ";
	cin >> this->id_location;
	cin.ignore();

	cout << "golden coins: ";
	cin >> this->coin;
	cin.ignore();
}

void Game::print() const
{
	cout << "id location: " << this->id_location << endl;
	cout << " coins: " << this->coin << endl;
}
