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
	void setNickname(string nickname) {
		this->nickname = nickname;
	}

	string getNickname() {
		return nickname;
	}

	void setHairColor(string hair_color) {
		this->hair_color = hair_color;
	}

	string getHairColor() {
		return hair_color;
	}

	void setType(string type) {
		this->type = type;
	}

	string getType() {
		return type;
	}

	void setHeight(int height) {
		this->height = height;
	}

	int getHeight() {
		return height;
	}

	void setCanMove(bool can_move) {
		this->can_move = can_move;
	}

	bool getCanMove() {
		return can_move;
	}

	void setHaveArmor(bool have_armor) {
		this->have_armor = have_armor;
	}

	bool getHaveArmor() {
		return have_armor;
	}

	void setHaveWeapon(bool have_weapon) {
		this->have_weapon = have_weapon;
	}

	bool getHaveWeapon() {
		return have_weapon;
	}

	void setBeautiful(string beautiful) {
		this->beautiful = beautiful;
	}

	string getBeautiful() {
		return beautiful;
	}

	void action() {
		cout << "Action figure " << nickname << " is acting.\n";
	}

	void pat() {
		cout << "You pat " << nickname << ".\n";
	}

	void clean() {
		cout << "You clean " << nickname << ".\n";
	}
};

class Sword {
private:
	string name;
	string color;
	string type; // one-handed, two-handed....
	int size;
	bool have_sheath;
	bool sharpness;
	string beautiful;

public:
	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}

	void setColor(string color) {
		this->color = color;
	}

	string getColor() {
		return color;
	}

	void setType(string type) {
		this->type = type;
	}

	string getType() {
		return type;
	}

	void setSize(int size) {
		this->size = size;
	}

	int getSize() {
		return size;
	}

	void setHaveSheath(bool have_sheath) {
		this->have_sheath = have_sheath;
	}

	bool getHaveSheath() {
		return have_sheath;
	}

	void setSharpness(bool sharpness) {
		this->sharpness = sharpness;
	}

	bool getSharpness() {
		return sharpness;
	}

	void setBeautiful(string beautiful) {
		this->beautiful = beautiful;
	}

	string getBeautiful() {
		return beautiful;
	}

	void unsheath() {
		cout << "You unsheathe the " << name << ".\n";
	}

	void sheath() {
		cout << "You sheath the " << name << ".\n";
	}

	void train() {
		cout << "You train with the " << name << ".\n";
	}

	void clean() {
		cout << "You clean the " << name << ".\n";
	}

	void sharp() {
		cout << "You sharpen the " << name << ".\n";
	}
};

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
	void setNickname(string nickname) {
		this->nickname = nickname;
	}

	string getNickname() {
		return nickname;
	}

	void setHairColor(string hair_color) {
		this->hair_color = hair_color;
	}

	string getHairColor() {
		return hair_color;
	}

	void setClassname(string classname) {
		this->classname = classname;
	}

	string getClassname() {
		return classname;
	}

	void setHeight(int height) {
		this->height = height;
	}

	int getHeight() {
		return height;
	}

	void setHaveArmor(bool have_armor) {
		this->have_armor = have_armor;
	}

	bool getHaveArmor() {
		return have_armor;
	}

	void setHaveWeapon(bool have_weapon) {
		this->have_weapon = have_weapon;
	}

	bool getHaveWeapon() {
		return have_weapon;
	}

	void setWeaponName(string weapon_name) {
		this->weapon_name = weapon_name;
	}

	string getWeaponName() {
		return weapon_name;
	}

	void setWeaponType(string weapon_type) {
		this->weapon_type = weapon_type;
	}

	string getWeaponType() {
		return weapon_type;
	}

	void setNoblePhantasm(string noble_phantasm) {
		this->noble_phantasm = noble_phantasm;
	}

	string getNoblePhantasm() {
		return noble_phantasm;
	}

	void setBeautiful(string beautiful) {
		this->beautiful = beautiful;
	}

	string getBeautiful() {
		return beautiful;
	}

	void talk() {
		cout << "Servant " << nickname << " is talking.\n";
	}

	void fight() {
		cout << "Servant " << nickname << " is fighting.\n";
	}

	void eat() {
		cout << "Servant " << nickname << " is eating.\n";
	}

	void sleep() {
		cout << "Servant " << nickname << " is sleeping.\n";
	}

	void noblePhantasm() {
		cout << "Servant " << nickname << " uses Noble Phantasm: " << noble_phantasm << ".\n";
	}
};

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
	void setNickname(string nickname) {
		this->nickname = nickname;
	}

	string getNickname() {
		return nickname;
	}

	void setHairColor(string hair_color) {
		this->hair_color = hair_color;
	}

	string getHairColor() {
		return hair_color;
	}

	void setType(string type) {
		this->type = type;
	}

	string getType() {
		return type;
	}

	void setHeight(int height) {
		this->height = height;
	}

	int getHeight() {
		return height;
	}

	void setHaveArmor(bool have_armor) {
		this->have_armor = have_armor;
	}

	bool getHaveArmor() {
		return have_armor;
	}

	void setHaveWeapon(bool have_weapon) {
		this->have_weapon = have_weapon;
	}

	bool getHaveWeapon() {
		return have_weapon;
	}

	void setComandSpells(int comand_spells) {
		this->comand_spells = comand_spells;
	}

	int getComandSpells() {
		if (comand_spells < 0) {
			cout << "Comand spells cannot be negative. Setting to 0.\n";
			comand_spells = 0;
		}
		else if (comand_spells > 3) {
			cout << "Maximum comand spells is 3. Setting to 3.\n";
			comand_spells = 3;
		}
		return comand_spells;
	}

	void setAge(int age) {
		this->age = age;
	}

	int getAge() {
		return age;
	}

	void setHaveServant(bool have_servant) {
		this->have_servant = have_servant;
	}

	bool getHaveServant() {
		return have_servant;
	}

	void setServantName(string servant_name) {
		this->servant_name = servant_name;
	}

	string getServantName() {
		return servant_name;
	}

	void setBeautiful(string beautiful) {
		this->beautiful = beautiful;
	}

	string getBeautiful() {
		return beautiful;
	}

	void summonServant() {
		cout << "Master " << nickname << " summons their servant.\n";
	}

	void callServant() {
		cout << "Master " << nickname << " calls their servant.\n";
	}

	void command() {
		cout << "Master " << nickname << " gives a command to their servant.\n";
	}

	void eat() {
		cout << "Master " << nickname << " is eating.\n";
	}

	void sleep() {
		cout << "Master " << nickname << " is sleeping.\n";
	}
};

class Car{
private:
	string name;
	string color;
	string type; // sedan, sport.... 
	int size;
	int max_speed;
	bool tuned = false;
	string motor;
	string model;
	string beautiful;

public:
	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}

	void setColor(string color) {
		this->color = color;
	}

	string getColor() {
		return color;
	}

	void setType(string type) {
		this->type = type;
	}

	string getType() {
		return type;
	}

	void setSize(int size) {
		this->size = size;
	}

	int getSize() {
		return size;
	}

	void setMaxSpeed(int max_speed) {
		this->max_speed = max_speed;
	}

	int getMaxSpeed() {
		return max_speed;
	}

	void setTuned(bool tuned) {
		this->tuned = tuned;
	}

	bool getTuned() {
		return tuned;
	}

	void setMotor(string motor) {
		this->motor = motor;
	}

	string getMotor() {
		return motor;
	}

	void setModel(string model) {
		this->model = model;
	}

	string getModel() {
		return model;
	}

	void setBeautiful(string beautiful) {
		this->beautiful = beautiful;
	}

	string getBeautiful() {
		return beautiful;
	}

	void start() {
		cout << "You start the car " << name << ".\n";
	}

	void stop() {
		cout << "You stop the car " << name << ".\n";
	}

	void drive() {
		cout << "You drive the car " << name << ".\n";
	}

	void clean() {
		cout << "You clean the car " << name << ".\n";
	}

	void tune() {
		if (!tuned) {
			cout << "You tune the car " << name << ".\n";
			tuned = true;
		}
		else {
			cout << "The car " << name << " is already tuned.\n";
		}
	}

	void repair() {
		cout << "You repair the car " << name << ".\n";
	}

	void paint() {
		cout << "You paint the car " << name << " in " << color << ".\n";
	}
};

int main() {
	ActionFigure Jeanne;
	Jeanne.setNickname("Jeanne d'Arc (fate)");
	Jeanne.setHairColor("blonde");
	Jeanne.setType("Ruler");
	Jeanne.setHeight(15);
	Jeanne.setCanMove(true);
	Jeanne.setHaveArmor(true);
	Jeanne.setHaveWeapon(true);
	Jeanne.setBeautiful("very beautiful!!!!");
	Jeanne.action();
	Jeanne.pat();
	Jeanne.clean();

	Sword Excalibur;
	Excalibur.setName("Excalibur");
	Excalibur.setColor("golden");
	Excalibur.setType("one-handed");
	Excalibur.setSize(100);
	Excalibur.setHaveSheath(true);
	Excalibur.setSharpness(true);
	Excalibur.setBeautiful("very beautiful!!!!");
	Excalibur.unsheath();
	Excalibur.sheath();
	Excalibur.train();
	Excalibur.clean();
	Excalibur.sharp();

	ServantFate Artoria;
	Artoria.setNickname("Artoria Pendragon");
	Artoria.setHairColor("blonde");
	Artoria.setClassname("Saber");
	Artoria.setHeight(160);
	Artoria.setHaveArmor(true);
	Artoria.setHaveWeapon(true);
	Artoria.setWeaponName("Excalibur");
	Artoria.setWeaponType("one-handed");
	Artoria.setNoblePhantasm("Excalibur");
	Artoria.setBeautiful("very beautiful!!!!");
	Artoria.talk();
	Artoria.fight();
	Artoria.eat();
	Artoria.sleep();
	Artoria.noblePhantasm();

	MasterFate Shirou;
	Shirou.setNickname("Shirou Emiya");
	Shirou.setHairColor("brown");
	Shirou.setType("mage");
	Shirou.setHeight(175);
	Shirou.setHaveArmor(false);
	Shirou.setHaveWeapon(true);
	Shirou.setComandSpells(3);
	Shirou.setAge(17);
	Shirou.setHaveServant(true);
	Shirou.setServantName("Artoria Pendragon");
	Shirou.setBeautiful("very beautiful!!!!");
	Shirou.summonServant();
	Shirou.callServant();
	Shirou.command();
	Shirou.eat();
	Shirou.sleep();

	Car Nissan;
	Nissan.setName("Nissan 370Z");
	Nissan.setColor("grey");
	Nissan.setType("sport");
	Nissan.setSize(123123);
	Nissan.setMaxSpeed(300);
	Nissan.setTuned(false);
	Nissan.setMotor("V6");
	Nissan.setModel("Nismo");
	Nissan.setBeautiful("very beautiful!!!!");
	Nissan.start();
	Nissan.drive();
	Nissan.stop();
	Nissan.clean();
	Nissan.tune();
	Nissan.repair();
	Nissan.paint();
}