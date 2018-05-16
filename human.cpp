using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>

class Human{

private:

	string name;
	int age;
	char sex;
	Human(){}

protected:

	Human(string _name, string _age, char _sex){
		name = _name;
		age = _age;
		sex = _sex;
	}

public:

	void setName(string name){
		this.name = name;
	}
	void setAge(int age){
		this.age=age;
	}
	void setSex(char sex){
		this.sex = sex;
	}

	string getName(){ return name; }
	int getAge(){ return age; }
	char getSex(){ return sex; }

	virtual string work(){

	}
};
