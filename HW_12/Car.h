#include <iostream>
using namespace std;

class Car {
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
	void setName(string name);
	string getName();
	void setColor(string color);
	string getColor();
	void setType(string type);
	string getType();
	void setSize(int size);
	int getSize();
	void setMaxSpeed(int max_speed);
	int getMaxSpeed();
	void setTuned(bool tuned);
	bool getTuned();
	void setMotor(string motor);
	string getMotor();
	void setModel(string model);
	string getModel();
	void setBeautiful(string beautiful);
	string getBeautiful();
	void start();
	void stop();
	void drive();
	void clean();
	void tune();
	void repair();
	void paint();
};


