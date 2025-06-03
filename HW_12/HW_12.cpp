#include <iostream>
using namespace std;

class ActionFigure {
public:
	string nickname;
	string hair_color;
	string type; // anime, game....
	int height;
	bool can_move = false;
	bool have_armor;
	bool have_weapon;
	string beautiful;

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
public:
	string name;
	string color;
	string type; // one-handed, two-handed....
	int size;
	bool have_sheath;
	bool sharpness;
	string beautiful;

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
public:
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
public:
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
public:
	string name;
	string color;
	string type; // sedan, sport.... 
	int size;
	int max_speed;
	bool tuned = false;
	string motor;
	string model;
	string beautiful;

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
	Jeanne.nickname = "Jeanne d'arc (fate)";
	Jeanne.hair_color = "blonde";
	Jeanne.type = "anime";
	Jeanne.height = 60;
	Jeanne.can_move = true;
	Jeanne.have_armor = true;
	Jeanne.have_weapon = true;
	Jeanne.beautiful = "very beautiful!!!!";
	Jeanne.clean();
	Jeanne.action();
	Jeanne.pat();

	Sword Excalibur;
	Excalibur.name = "Excalibur";
	Excalibur.color = "golden";
	Excalibur.type = "one-handed";
	Excalibur.size = 30;
	Excalibur.have_sheath = true;
	Excalibur.sharpness = true;
	Excalibur.beautiful = "very beautiful!!!!";
	Excalibur.unsheath();
	Excalibur.sheath();
	Excalibur.train();
	Excalibur.clean();
	Excalibur.sharp();

	ServantFate Artoria;
	Artoria.nickname = "Artoria Pendragon (fate)";
	Artoria.hair_color = "blonde";
	Artoria.classname = "Saber";
	Artoria.height = 154;
	Artoria.have_armor = true;
	Artoria.have_weapon = true;
	Artoria.weapon_name = "Excalibur";
	Artoria.weapon_type = "sword";
	Artoria.noble_phantasm = "Excalibur";
	Artoria.beautiful = "very beautiful!!!!";
	Artoria.talk();
	Artoria.fight();
	Artoria.eat();
	Artoria.sleep();
	Artoria.noblePhantasm();

	MasterFate Shirou;
	Shirou.nickname = "Shirou Emiya (fate)";
	Shirou.hair_color = "red";
	Shirou.type = "mage";
	Shirou.height = 180;
	Shirou.have_armor = false;
	Shirou.have_weapon = true;
	Shirou.comand_spells = 3;
	Shirou.age = 17;
	Shirou.have_servant = true;
	Shirou.servant_name = "Artoria Pendragon";
	Shirou.beautiful = "handsome";
	Shirou.summonServant();
	Shirou.callServant();
	Shirou.command();
	Shirou.eat();
	Shirou.sleep();

	Car Nissan;
	Nissan.name = "Nissan Fairlady";
	Nissan.color = "gray";
	Nissan.type = "sport";
	Nissan.size = 2;
	Nissan.max_speed = 300;
	Nissan.tuned = false;
	Nissan.motor = "V6";
	Nissan.model = "370Z";
	Nissan.beautiful = "very beautiful!!!!";
	Nissan.start();
	Nissan.drive();
	Nissan.stop();
	Nissan.clean();
	Nissan.tune();
	Nissan.repair();
	Nissan.paint();
}