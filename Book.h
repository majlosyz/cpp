#ifndef BOOK_H_
#define BOOK_H_

#include "LibraryItem.h"
#include <string>

class Book : public LibraryItem {
public:
	Book();
	virtual ~Book();

	std::string author;
};

#endif /* BOOK_H_ */