#include <iostream>
using namespace std;

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
	void setName(string name);
	string getName();
	void setColor(string color);
	string getColor();
	void setType(string type);
	string getType();
	void setSize(int size);
	int getSize();
	void setHaveSheath(bool have_sheath);
	bool getHaveSheath();
	void setSharpness(bool sharpness);
	bool getSharpness();
	void setBeautiful(string beautiful);
	string getBeautiful();
	void unsheath();
	void sheath();
	void train();
	void clean();
	void sharp();
};


