#include "./Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal type constructor called and type " << type << " set." << std::endl;
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

const std::string& Animal::getType() const {
	return this->_type;
}

void Animal::setType(const std::string& type) {
	this->_type = type;
}