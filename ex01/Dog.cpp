#include "./Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor called." << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this == &other)
		return *this;
	Animal::operator=(other);
	*this->_brain = *other._brain;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}