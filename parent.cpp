using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>

#include "human.cpp"
#include "child.cpp"


class Parent : public Human{

private:

	vector<Child> children;

public:

	void setChildren(int index, Child child){
		children.at(index) = child;
	}

	void getChildren(int index){
		return children.at(index);
	}

	void changeChildName(Child child, name name){
		child.setName(name);
	}

	string work(string s){
			return s;
		}
};
