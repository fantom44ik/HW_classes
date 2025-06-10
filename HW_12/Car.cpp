#include "Car.h"

void Car::setName(string name) {
	this->name = name;
}

string Car::getName() {
	return name;
}

void Car::setColor(string color) {
	this->color = color;
}

string Car::getColor() {
	return color;
}

void Car::setType(string type) {
	this->type = type;
}

string Car::getType() {
	return type;
}

void Car::setSize(int size) {
	this->size = size;
}

int Car::getSize() {
	return size;
}

void Car::setMaxSpeed(int max_speed) {
	this->max_speed = max_speed;
}

int Car::getMaxSpeed() {
	return max_speed;
}

void Car::setTuned(bool tuned) {
	this->tuned = tuned;
}

bool Car::getTuned() {
	return tuned;
}

void Car::setMotor(string motor) {
	this->motor = motor;
}

string Car::getMotor() {
	return motor;
}

void Car::setModel(string model) {
	this->model = model;
}

string Car::getModel() {
	return model;
}

void Car::setBeautiful(string beautiful) {
	this->beautiful = beautiful;
}

string Car::getBeautiful() {
	return beautiful;
}

void Car::start() {
	cout << "You start the car " << name << ".\n";
}

void Car::stop() {
	cout << "You stop the car " << name << ".\n";
}

void Car::drive() {
	cout << "You drive the car " << name << ".\n";
}

void Car::clean() {
	cout << "You clean the car " << name << ".\n";
}

void Car::tune() {
	if (!tuned) {
		cout << "You tune the car " << name << ".\n";
		tuned = true;
	}
	else {
		cout << "The car " << name << " is already tuned.\n";
	}
}

void Car::repair() {
	cout << "You repair the car " << name << ".\n";
}

void Car::paint() {
	cout << "You paint the car " << name << " in " << color << ".\n";
}