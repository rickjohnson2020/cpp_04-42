#include "./Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat copy constructor called." << std::endl;
	this->_type = other._type;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}