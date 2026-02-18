#include "./Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->_type = other._type;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}