#ifndef WORKER_H_
#define WORKER_H_

#include "Human.h"
#include <iostream>
#include <string>

using namespace std;

class Worker: public Human {
public:
	Worker();
	virtual ~Worker();
	string jobTitle;
	int salary;
};

#endif /* WORKER_H_ */