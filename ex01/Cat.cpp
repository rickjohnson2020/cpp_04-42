#include "./Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor called." << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat copy constructor called." << std::endl;
	this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this == &other)
		return *this;
	Animal::operator=(other);
	*this->_brain = *other._brain;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}

Brain* Cat::getBrain() {
	return this->_brain;
}