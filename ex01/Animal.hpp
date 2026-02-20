#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string _type;

public:
	Animal();
	virtual ~Animal();
	Animal(std::string type);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);

	const std::string& getType() const;
	void setType(const std::string& type);
	virtual void makeSound() const;
};

#endif