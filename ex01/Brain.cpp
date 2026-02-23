#include "./Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor called." << std::endl;
	// *this = other;
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

std::string Brain::getIdea(int i) {
	if (i < 0 || i >= 100) {
		std::cerr << "Index out of range" << std::endl;
		return "";
	}
	return this->_ideas[i];
}

void Brain::setIdea(int i, const std::string& idea) {
	if (i < 0 || i >= 100) {
		std::cerr << "Index out of range" << std::endl;
		return;
	}
	this->_ideas[i] = idea;
}