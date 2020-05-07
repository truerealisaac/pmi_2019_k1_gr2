#include <iostream>
#include "Zoo.h"
#include "Wolf.h"
#include "Fox.h"
#include "Cat.h"

using namespace std;

int main() {

	Zoo zoo;	//Создал зоопарк

	Wolf wolf(1), wolf1(2), wolf2(1984);	//Создаём живтных
	Fox fox1(3);
	Cat cat1(1);


	zoo.take_cell(3)->Add(&wolf);	// Разводим их по клеткам
	zoo.take_cell(4)->Add(&wolf2);
	zoo.take_cell(7)->Add(&fox1);
	zoo.take_cell(9)->Add(&cat1);

	zoo.around();	// Обходим зоопарк

	return 0;
}