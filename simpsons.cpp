using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>

#include "human.cpp"
#include "parent.cpp"
#include "child.cpp"

class Simpsons{
	void main(){


		//create family
		Human dad = new Parent();
		Human mom = new Parent();
		Human son = new Child(mom, dad);
		Human daughter = new Child(mom, dad);
		Human baby = new Child(mom, dad);

		//set parents' children
		dad.children.insert(0, son);
		dad.children.insert(0, daughter);
		dad.children.insert(0, baby);
		mom.children.insert(0, son);
		mom.children.insert(0, daughter);
		mom.children.insert(0, baby);


		//set details of family
		dad.setName("Homer");
		dad.setAge(36);
		dad.setSex("M");

		mom.setName("Marge");
		mom.setAge(34);
		mom.setSex("F");

		dad.changeChildName(son, "Bart");
		son.setAge(10);

		dad.changeChildName(daughter, "Lisa");
		daughter.setAge(12);

		mom.changeChildName(baby, "Maggie");
		baby.setAge(3);


		//print data
		cout<<dad.getName()<<dad.getAge()<<dad.getSex()<<dad.work("health inspector")
			<<"\n"<<mom.getName()<<mom.getAge()<<mom.getSex()<<mom.work("housewife")
			<<"\n"<<son.getName()<<son.getAge()<<son.getSex()<<son.work("student")
			<<"\n"<<daughter.getName()<<daughter.getAge()<<daughter.getSex()<<daughter.work("student")
			<<"\n"<<baby.getName()<<baby.getAge()<<baby.getSex()<<baby.work("play");
	}
};
