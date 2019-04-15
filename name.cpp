#include <iostream>
use namespace std;

class Name {
	private string name;

	string getName() {
		return this->name;
	}

	string setName(string name) {
		this->name = name;	
	}
}
