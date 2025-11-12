#ifndef MAGAZINE_H_
#define MAGAZINE_H_

#include "LibraryItem.h"
#include <string>

class Magazine : public LibraryItem {
public:
	Magazine();
	virtual ~Magazine();

	std::string publisher;
	int issueNumber;
};

#endif /* MAGAZINE_H_ */