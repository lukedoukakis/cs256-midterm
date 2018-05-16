using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>

#include "human.cpp"
#include "parent.cpp"

class Child : public Human{

private:

	Parent Mom;
	Parent Dad;
	Child(){}

public:

	Child(Parent mom, Parent dad){
		Mom = mom;
		Dad = dad;
	}

	string work(string s){
		return s;
	}

};
