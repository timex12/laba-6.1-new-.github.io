#include "MonsterKill.h"
#include "Game.h"
#include <iostream>
using namespace std;



MonsterKill::MonsterKill(int location_monster, int type_monster, int count_monster) : Game()
{
    if (location_monster < 1 || location_monster > 1000000 || type_monster < 1 || type_monster > 200)
    {
        cout << "Error: invalid location or type of monster" << endl;

        this->location_monster = 1;
        this->type_monster = 1;
    }
    else
    {
        this->location_monster = location_monster;
        this->type_monster = type_monster;
    }

    if (count_monster <= 0)
    {
        cout << "Error: invalid count of monsters" << endl;
        this->count_monster = 1;
    }
    else
    {
        this->count_monster = count_monster;
    }
    
}

int MonsterKill::Get_locationM()
{
    return this->location_monster;
}

int MonsterKill::Get_typeM()
{
    return type_monster;
}

int MonsterKill::Get_countM()
{
    return count_monster;
}

int  MonsterKill::getCoin()
{
    return coin;
}

int MonsterKill::getLocation()
{
    return id_location;
}



void MonsterKill::Set_location(int newlocation_monster)
{
    if (newlocation_monster >= 1 && newlocation_monster <= 1000000)
    {
       location_monster = newlocation_monster;
    }
    else
    {
        cout << "Error: invalid location of monster" << endl;
    }
}

void MonsterKill::Set_typeM(int newtype)
{
    if (newtype >= 1 && newtype <= 200)
    {
        type_monster = newtype;
    }
    else
    {
        cout << "Error: invalid type of monster" << endl;
    }
}

void MonsterKill::Set_countM(int newcount)
{
    if (newcount > 0)
    {
        count_monster = newcount;
    }
    else
    {
        cout << "Error: invalid count of monsters" << endl;
    }
}

void MonsterKill::setCoin(int newcoin)
{
    Game::setCoin(newcoin);
}

void MonsterKill::setLocation(int id)
{
    Game::setLocation(id);
}

void MonsterKill::print() const
{
    Game::print();
    cout << "ID of the location where the monsters live: " << location_monster << endl;
    cout << "Type of monsters: " << type_monster << endl;
    cout << "Count of monsters: " << count_monster << endl;
}

void MonsterKill::fill()
{
    Game::fill();
    cout << "enter ID of the location where the monsters live: ";
    cin >> this->location_monster;
    cin.ignore();

    cout << "enter type of monsters: ";
    cin >> this->type_monster;
    cin.ignore();

    cout << "enter count of monsters: ";
    cin >> this->count_monster;
    cin.ignore();
}
