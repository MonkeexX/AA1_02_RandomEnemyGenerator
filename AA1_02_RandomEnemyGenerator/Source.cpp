#include <iostream>

using namespace std;


enum class EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH };

struct Enemy
{
	string enemy;
	string name;
	int health;
	EnemyType typeEnemy;

};


//falta esto
string getEnemyTypeString(int typeEnemy)
{
	string enemyType;
	switch (typeEnemy)
	{
	case 0:
	{
		enemyType = "ZOMBIE";
		break;
	}
	case 1:
	{
		enemyType = "VAMPIRE";
		break;
	}
	case 2:
	{
		enemyType = "GHOST";
		break;
	}
	case 3:
	{
		enemyType = "WITCH";
		break;
	}
	default:
	{
		enemyType = "INVALID TYPE";
		break;
	}
	}
	cout << enemyType;
	return enemyType;

}

int main()
{
	int number = 5;
	getEnemyTypeString(number);

}