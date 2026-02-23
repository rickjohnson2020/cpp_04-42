#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal type constructor called and type " << type << " set." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	this->_type = other._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

const std::string& WrongAnimal::getType() const {
	return this->_type;
}

void WrongAnimal::setType(const std::string& type) {
	this->_type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound" << std::endl;
}