#ifndef LIBRARYITEM_H_
#define LIBRARYITEM_H_

#include <string>
#include <iostream>
using namespace std;

class LibraryItem {
private:
	int publicationYear; 

public:
	LibraryItem();
	virtual ~LibraryItem();

	string title;
	int signature;

	void setPublicationYear(int year);
	int getBookAge(); 
};

#endif /* LIBRARYITEM_H_ */