#include "./Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor called." << std::endl;
	*this = other;
}

//TODO
Brain& Brain::operator=(const Brain& other) {
	std::cout << "Brain copy assignment operator called." << std::endl;
	if (this == &other)
		return *this;

	return *this;
}