#include "./Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << "Animal copy constructor called." << std::endl;
	this->_type = other._type;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal copy assignment operator called." << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}