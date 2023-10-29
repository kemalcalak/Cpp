#include <iostream>
using namespace std;

class Example {
public:
	int x, y;
	Example() {
		cout << "Constructor worked." << endl;
	}
	~Example() {
		cout << "Destructor worked." << endl;
	}
	void print() {
		cout << "X Value: " << x << "Y Value:" << y << endl;
	}
};
