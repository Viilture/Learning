// Test8-3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>



class Monster
{
public:
    enum MonsterTypes
    {
        Dragon,
        Goblin,
        Ogre,
        Orc,
        Skeleton,
        Troll,
        Vampire,
        Zombie,
        MAX_MONSTER_TYPES
    };

    MonsterTypes MonsterType;
    std::string name;
    int Health = 100;

    Monster(MonsterTypes MonsterType_1, std::string name_1, int Health_1):MonsterType(MonsterType_1), name(name_1), Health(Health_1)
    {

    }

    void print()
    {
        std::cout << name << " is the " << getTypeString(MonsterType)<< " that has " << Health << " health points" << std::endl;
    }

    std::string getTypeString(MonsterTypes Type)
    {
        switch (Type)
        {
        case 0: return "Dragon";
        case 1: return "Goblin";
        case 2: return "Ogre";
        case 3: return "Orc";
        case 4: return "Skeleton";
        case 5: return "Troll";
        case 6: return "Vampire";
        case 7: return "Zombie";
        case 8: return "MAX_MONSTER_TYPES";
        }


    }

    static Monster generateMonster()
    {
        std::srand(std::time(nullptr));
        MonsterTypes monstr = MonsterTypes(rand()%8);
        std::srand(std::time(nullptr));
        Monster NewMonster(monstr,"NewMonster", rand()%101);
        return NewMonster;
    }

};

int main()
{   
   
        Monster jack = Monster::generateMonster();

        jack.print();
    

}

