#include <iostream>
#include "ActionFigure.h"
#include "Sword.h"
#include "ServantFate.h"
#include "MasterFate.h"
#include "Car.h"
using namespace std;

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