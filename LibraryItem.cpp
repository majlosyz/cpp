#include "LibraryItem.h"

LibraryItem::LibraryItem() {
	publicationYear = 0; 
	signature = 0;
	title = "Brak tytułu";
}

LibraryItem::~LibraryItem() {

}

void LibraryItem::setPublicationYear(int year) {
	if (publicationYear == 0) {
		publicationYear = year;
	}
}

int LibraryItem::getBookAge() {
	if (publicationYear == 0) {
		return 0;
	}
	return 2025 - publicationYear; 
}