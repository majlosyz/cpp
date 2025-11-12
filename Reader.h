#ifndef READER_H_
#define READER_H_

#include "Human.h"
#include <string>

class Reader : public Human {
public:
	Reader();
	virtual ~Reader();

	int libraryCardNumber;
	int borrowedCount;
};

#endif /* READER_H_ */