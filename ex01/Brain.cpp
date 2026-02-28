#include "./Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor called." << std::endl;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = other._ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "Brain copy assignment operator called." << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = other._ideas[i];
	}
	return *this;
}

bool Brain::getIdea(int i, std::string& out) const {
	if (i < 0 || i >= 100)
		return false;
	out = this->_ideas[i];
	return true;
}

bool Brain::setIdea(int i, const std::string& idea) {
	if (i < 0 || i >= 100)
		return false;
	this->_ideas[i] = idea;
	return true;
}