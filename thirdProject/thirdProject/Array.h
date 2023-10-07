#include <iostream>
using namespace std;

class Array {
	int* data, size, capacity;
	int findexIndex(int number, int b = 0);
public:
	Array(int user_capacity = 5);
	~Array();
	Array(const Array& copyArray);
	int getSize() const {
		return size;
	}
	int getCapacity() const {
		return capacity;
	}
	void AddItem(int number);
	void printItems();
	void removeIndexItem(int index);
	void removeItem(int index);
	void findElement(int number, int b = 0);
};

Array::Array(int user_capacity) {
	capacity = user_capacity;
	size = 0;
	data = new int[capacity];
	cout << "Array is created with capacity " << capacity << endl;
}
Array::~Array() {
	delete[] data;
	cout << "Array destroyed" << endl;
}
Array::Array(const Array& copyArray) {
	capacity = copyArray.capacity;
	size = copyArray.size;
	data = new int[capacity];
	for (int i = 0; i < copyArray.size; i++) {
		data[i] = copyArray.data[i];
	}
	cout << "Array copied to target." << endl;
}
