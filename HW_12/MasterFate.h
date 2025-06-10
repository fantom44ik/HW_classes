#include <iostream>
using namespace std;

class MasterFate {
private:
	string nickname;
	string hair_color;
	string type; // mage, human....
	int height;
	bool have_armor;
	bool have_weapon;
	int comand_spells;
	int age;
	bool have_servant;
	string servant_name;
	string beautiful;

public:
	void setNickname(string nickname);
	string getNickname();
	void setHairColor(string hair_color);
	string getHairColor();
	void setType(string type);
	string getType();
	void setHeight(int height);
	int getHeight();
	void setHaveArmor(bool have_armor);
	bool getHaveArmor();
	void setHaveWeapon(bool have_weapon);
	bool getHaveWeapon();
	void setComandSpells(int comand_spells);
	int getComandSpells();
	void setAge(int age);
	int getAge();
	void setHaveServant(bool have_servant);
	bool getHaveServant();
	void setServantName(string servant_name);
	string getServantName();
	void setBeautiful(string beautiful);
	string getBeautiful();
	void summonServant();
	void callServant();
	void command();
	void eat();
	void sleep();
};

