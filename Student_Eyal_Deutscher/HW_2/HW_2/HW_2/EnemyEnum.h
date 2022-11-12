#pragma once
class EnemyEnum
{
public: enum EnemiesEnum
{
	Golem,
	Dwarf,
	Vampire,
	Potato
};
	  int* SetStats(int attack, int defense, int speed, int health)
	  {
		  int tempInt[4]{attack,defense,speed,health};
		  return tempInt;
	  }
	  int *GetEnemyStats(EnemiesEnum enemiesEnum)
	  {
		  //0 = Attack
		  int tempInt[4];
		  switch (enemiesEnum)
		  {
		  case EnemyEnum::Golem:
			  return SetStats(500,900,1,800);
		  case EnemyEnum::Dwarf:
			  return SetStats(200,100,50,600);
		  case EnemyEnum::Vampire:
			  return SetStats(800,50,500,100);
		  case EnemyEnum::Potato:
			  return SetStats(0,0,0,1);
		  default:
			  break;
		  }
		  return tempInt;
	  }

};

