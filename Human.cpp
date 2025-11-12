/*
 * Human.cpp
 *
 *  Created on: Oct 29, 2025
 *      Author: ahypki
 */

#include "Human.h"

Human::Human() {
	// TODO Auto-generated constructor stub
	age = 0;
}

Human::~Human() {
	// TODO Auto-generated destructor stub
}

void Human::setAge(int newAge) {
	if (age == 0) {
		age = newAge;
	}
}

bool Human::isAdult() {
	return age >= 18;
}
