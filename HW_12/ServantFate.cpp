#include "ServantFate.h"

void ServantFate::setNickname(string nickname) {
	this->nickname = nickname;
}

string ServantFate::getNickname() {
	return nickname;
}

void ServantFate::setHairColor(string hair_color) {
	this->hair_color = hair_color;
}

string ServantFate::getHairColor() {
	return hair_color;
}

void ServantFate::setClassname(string classname) {
	this->classname = classname;
}

string ServantFate::getClassname() {
	return classname;
}

void ServantFate::setHeight(int height) {
	this->height = height;
}

int ServantFate::getHeight() {
	return height;
}

void ServantFate::setHaveArmor(bool have_armor) {
	this->have_armor = have_armor;
}

bool ServantFate::getHaveArmor() {
	return have_armor;
}

void ServantFate::setHaveWeapon(bool have_weapon) {
	this->have_weapon = have_weapon;
}

bool ServantFate::getHaveWeapon() {
	return have_weapon;
}

void ServantFate::setWeaponName(string weapon_name) {
	this->weapon_name = weapon_name;
}

string ServantFate::getWeaponName() {
	return weapon_name;
}

void ServantFate::setWeaponType(string weapon_type) {
	this->weapon_type = weapon_type;
}

string ServantFate::getWeaponType() {
	return weapon_type;
}

void ServantFate::setNoblePhantasm(string noble_phantasm) {
	this->noble_phantasm = noble_phantasm;
}

string ServantFate::getNoblePhantasm() {
	return noble_phantasm;
}

void ServantFate::setBeautiful(string beautiful) {
	this->beautiful = beautiful;
}

string ServantFate::getBeautiful() {
	return beautiful;
}

void ServantFate::talk() {
	cout << "Servant " << nickname << " is talking.\n";
}

void ServantFate::fight() {
	cout << "Servant " << nickname << " is fighting.\n";
}

void ServantFate::eat() {
	cout << "Servant " << nickname << " is eating.\n";
}

void ServantFate::sleep() {
	cout << "Servant " << nickname << " is sleeping.\n";
}

void ServantFate::noblePhantasm() {
	cout << "Servant " << nickname << " uses Noble Phantasm: " << noble_phantasm << ".\n";
}