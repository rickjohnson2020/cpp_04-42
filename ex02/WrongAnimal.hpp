#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string _type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);

	const std::string& getType() const;
	void setType(const std::string& type);
	virtual void makeSound() const;
};

#endif