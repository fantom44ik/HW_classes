#include "ActionFigure.h"

void ActionFigure::setNickname(string nickname) {
	this->nickname = nickname;
}

string ActionFigure::getNickname() {
	return nickname;
}

void ActionFigure::setHairColor(string hair_color) {
	this->hair_color = hair_color;
}

string ActionFigure::getHairColor() {
	return hair_color;
}

void ActionFigure::setType(string type) {
	this->type = type;
}

string ActionFigure::getType() {
	return type;
}

void ActionFigure::setHeight(int height) {
	this->height = height;
}

int ActionFigure::getHeight() {
	return height;
}

void ActionFigure::setCanMove(bool can_move) {
	this->can_move = can_move;
}

bool ActionFigure::getCanMove() {
	return can_move;
}

void ActionFigure::setHaveArmor(bool have_armor) {
	this->have_armor = have_armor;
}

bool ActionFigure::getHaveArmor() {
	return have_armor;
}

void ActionFigure::setHaveWeapon(bool have_weapon) {
	this->have_weapon = have_weapon;
}

bool ActionFigure::getHaveWeapon() {
	return have_weapon;
}

void ActionFigure::setBeautiful(string beautiful) {
	this->beautiful = beautiful;
}

string ActionFigure::getBeautiful() {
	return beautiful;
}

void ActionFigure::action() {
	cout << "Action figure " << nickname << " is acting.\n";
}

void ActionFigure::pat() {
	cout << "You pat " << nickname << ".\n";
}

void ActionFigure::clean() {
	cout << "You clean " << nickname << ".\n";
}