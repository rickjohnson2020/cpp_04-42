#include "./Animal.hpp"
#include "./WrongAnimal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongCat.hpp"

int main() {

	// const Animal* meta = new Animal();
	const Animal* d1 = new Dog();
	const Animal* c1 = new Cat();
	Dog* d2 = new Dog();
	Dog* d3 = new Dog();
	std::cout << std::endl;

	std::cout << "Dog type: " << d1->getType() << " " << std::endl;
	std::cout << "Cat type: " << c1->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "Cat makes sound: ";
	c1->makeSound();

	std::cout << "Dog makes sound: ";
	d1->makeSound();
	std::cout << std::endl;

	if (!d2->getBrain()->setIdea(0, "I want to be a cat!"))
		std::cout << "Idex out of range" << std::endl;
	else
		std::cout << "Idea set. Index: 0" << std::endl;
	std::cout << std::endl;

	*d3 = *d2;
	if (!d3->getBrain()->setIdea(0, "I don't want to be a cat!"))
		std::cout << "Index out of range" << std::endl;
	else
		std::cout << "Idea set. Index: 0" << std::endl;

	std::string idea;
	std::cout << "d2's idea[0]: " << (d2->getBrain()->getIdea(0, idea) ? idea : "Index out of range") << std::endl;
	std::cout << "d3's idea[0]: " << (d3->getBrain()->getIdea(0, idea) ? idea : "Index out of range") << std::endl;
	std::cout << std::endl;

	delete d1;
	delete d2;
	delete d3;
	delete c1;

	return 0;
}