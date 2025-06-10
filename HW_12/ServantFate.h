#include <iostream>
using namespace std;

class ServantFate {
private:
	string nickname;
	string hair_color;
	string classname; // Saber, Lancer, Archer...
	int height;
	bool have_armor;
	bool have_weapon;
	string weapon_name;
	string weapon_type;
	string noble_phantasm;
	string beautiful;

public:
	void setNickname(string nickname);
	string getNickname();
	void setHairColor(string hair_color);
	string getHairColor();
	void setClassname(string classname);
	string getClassname();
	void setHeight(int height);
	int getHeight();
	void setHaveArmor(bool have_armor);
	bool getHaveArmor();
	void setHaveWeapon(bool have_weapon);
	bool getHaveWeapon();
	void setWeaponName(string weapon_name);
	string getWeaponName();
	void setWeaponType(string weapon_type);
	string getWeaponType();
	void setNoblePhantasm(string noble_phantasm);
	string getNoblePhantasm();
	void setBeautiful(string beautiful);
	string getBeautiful();
	void talk();
	void fight();
	void eat();
	void sleep();
	void noblePhantasm();
};
