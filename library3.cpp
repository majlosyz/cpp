#include <iostream>
#include "Human.h"
#include "Worker.h"
#include "Book.h"
#include "Reader.h"
#include "Magazine.h"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; 

	Human h = Human();
	h.setAge(20);
	h.pesel = 123;
	cout << "Human is adult: " << h.isAdult() << endl;

	Worker w = Worker();
	w.jobTitle = "Bibliotekarz";
	w.pesel = 899;
	w.salary = 4000;
	w.setAge(30);
	cout << "Worker " << w.jobTitle << " is adult: " << w.isAdult() << endl;

	cout << "PRZYKLAD Z BOOK" << endl;

	Book b = Book();
	b.title = "Pan Tadeusz"; 
	b.author = "Adam Mickiewicz"; 
	b.signature = 555; 
	b.setPublicationYear(1834); 

	cout << "Książka: " << b.title << " (Autor: " << b.author << ")" << endl;
	cout << "Wiek książki: " << b.getBookAge() << " lat." << endl;

	
	cout << "PRZYKŁAD Z READER" << endl;
	Reader r = Reader();
	r.setAge(25);
	r.pesel = 777123;
	r.libraryCardNumber = 1001;
	r.borrowedCount = 3;
	cout << "Reader (card nr " << r.libraryCardNumber << ") is adult: " << r.isAdult() << endl;
	cout << "Borrowed items: " << r.borrowedCount << endl;

	
	cout << "PRZYKŁAD Z MAGAZINE" << endl;
	Magazine m = Magazine();
	m.title = "Swiat Nauki";
	m.publisher = "Prószyński Media";
	m.issueNumber = 11;
	m.setPublicationYear(2024);
	m.signature = 102;
	
	cout << "Magazine: " << m.title << " (Publisher: " << m.publisher << ")" << endl;
	cout << "Issue number: " << m.issueNumber << endl;
	cout << "Magazine age: " << m.getBookAge() << " lat." << endl; 

	return 0;
}