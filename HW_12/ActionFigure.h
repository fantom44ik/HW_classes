#include <iostream>
using namespace std;

class ActionFigure {
private:
	string nickname = "test";
	string hair_color;
	string type; // anime, game....
	int height;
	bool can_move = false;
	bool have_armor;
	bool have_weapon;
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
	void setCanMove(bool can_move);
	bool getCanMove();
	void setHaveArmor(bool have_armor);
	bool getHaveArmor();
	void setHaveWeapon(bool have_weapon);
	bool getHaveWeapon();
	void setBeautiful(string beautiful);
	string getBeautiful();
	void action();
	void pat();
	void clean();
};


