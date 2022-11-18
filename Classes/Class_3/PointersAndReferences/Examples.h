
#include <string>
using std::string;

class Enemy
{
private:
	string Type;
	unsigned int Damage;

public:
	Enemy(string type, unsigned int damage)
		: Type(type), Damage(damage)
	{}

	string GetType() const { return Type; }
	unsigned int GetDamage() const { return Damage; }

};
