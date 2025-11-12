#ifndef HUMAN_H_
#define HUMAN_H_

class Human {
private:
	int age;

public:
	Human();
	virtual ~Human();

	long long pesel;

	void setAge(int newAge);
	bool isAdult();
};

#endif /* HUMAN_H_ */