#include "Sword.h"

void Sword::setName(string name) {
	this->name = name;
}

string Sword::getName() {
	return name;
}

void Sword::setColor(string color) {
	this->color = color;
}

string Sword::getColor() {
	return color;
}

void Sword::setType(string type) {
	this->type = type;
}

string Sword::getType() {
	return type;
}

void Sword::setSize(int size) {
	this->size = size;
}

int Sword::getSize() {
	return size;
}

void Sword::setHaveSheath(bool have_sheath) {
	this->have_sheath = have_sheath;
}

bool Sword::getHaveSheath() {
	return have_sheath;
}

void Sword::setSharpness(bool sharpness) {
	this->sharpness = sharpness;
}

bool Sword::getSharpness() {
	return sharpness;
}

void Sword::setBeautiful(string beautiful) {
	this->beautiful = beautiful;
}

string Sword::getBeautiful() {
	return beautiful;
}

void Sword::unsheath() {
	cout << "You unsheathe the " << name << ".\n";
}

void Sword::sheath() {
	cout << "You sheath the " << name << ".\n";
}

void Sword::train() {
	cout << "You train with the " << name << ".\n";
}

void Sword::clean() {
	cout << "You clean the " << name << ".\n";
}

void Sword::sharp() {
	cout << "You sharpen the " << name << ".\n";
}