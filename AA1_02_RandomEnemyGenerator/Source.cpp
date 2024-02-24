#include <iostream>
using namespace std;


enum class EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH };

struct Enemy
{
	string enemy;
	string name;
	int health;

};


//falta esto
string getEnemyTypeString(char typeEnemy)
{
	string enemy = (EnemyType)(rand() % 3);

}

int main()
{

	
}