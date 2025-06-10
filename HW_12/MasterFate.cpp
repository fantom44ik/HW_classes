#include "MasterFate.h"

void MasterFate::setNickname(string nickname) {
	this->nickname = nickname;
}

string MasterFate::getNickname() {
	return nickname;
}

void MasterFate::setHairColor(string hair_color) {
	this->hair_color = hair_color;
}

string MasterFate::getHairColor() {
	return hair_color;
}

void MasterFate::setType(string type) {
	this->type = type;
}

string MasterFate::getType() {
	return type;
}

void MasterFate::setHeight(int height) {
	this->height = height;
}

int MasterFate::getHeight() {
	return height;
}

void MasterFate::setHaveArmor(bool have_armor) {
	this->have_armor = have_armor;
}

bool MasterFate::getHaveArmor() {
	return have_armor;
}

void MasterFate::setHaveWeapon(bool have_weapon) {
	this->have_weapon = have_weapon;
}

bool MasterFate::getHaveWeapon() {
	return have_weapon;
}

void MasterFate::setComandSpells(int comand_spells) {
	this->comand_spells = comand_spells;
}

int MasterFate::getComandSpells() {
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

void MasterFate::setAge(int age) {
	this->age = age;
}

int MasterFate::getAge() {
	return age;
}

void MasterFate::setHaveServant(bool have_servant) {
	this->have_servant = have_servant;
}

bool MasterFate::getHaveServant() {
	return have_servant;
}

void MasterFate::setServantName(string servant_name) {
	this->servant_name = servant_name;
}

string MasterFate::getServantName() {
	return servant_name;
}

void MasterFate::setBeautiful(string beautiful) {
	this->beautiful = beautiful;
}

string MasterFate::getBeautiful() {
	return beautiful;
}

void MasterFate::summonServant() {
	cout << "Master " << nickname << " summons their servant.\n";
}

void MasterFate::callServant() {
	cout << "Master " << nickname << " calls their servant.\n";
}

void MasterFate::command() {
	cout << "Master " << nickname << " gives a command to their servant.\n";
}

void MasterFate::eat() {
	cout << "Master " << nickname << " is eating.\n";
}

void MasterFate::sleep() {
	cout << "Master " << nickname << " is sleeping.\n";
}