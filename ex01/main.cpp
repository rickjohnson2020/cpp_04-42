#include "./Animal.hpp"
#include "./WrongAnimal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongCat.hpp"

int main() {
	const int N = 10;
	const Animal* animal[N];

	for (int i = 0; i < N; i++) {
		if (i < N / 2)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}
	for (int i = 0; i < N; i++) {
		delete animal[i];
	}
	std::cout << "=================" << std::endl;

	Dog d1;
	d1.getBrain()->setIdea(0, "I want to be a cat!");
	d1.getBrain()->setIdea(100, "...");
	Dog d2 = d1;
	d2.getBrain()->setIdea(0, "I don't want to be a cat!");

	std::cout << "d1's idea: " << d1.getBrain()->getIdea(0) << std::endl;
	std::cout << "d2's idea: " << d2.getBrain()->getIdea(0) << std::endl;
	std::cout << "d2's idea (out of range): " << d2.getBrain()->getIdea(100) << std::endl;

	std::cout << "d1 brain's address: " << d1.getBrain() << std::endl;
	std::cout << "d2 brain's address: " << d2.getBrain() << std::endl;


	Cat *c1 = new Cat();
	c1->getBrain()->setIdea(99, "I want to be a dog!");
	Cat *c2 = new Cat(*c1);
	c2->getBrain()->setIdea(99, "I don't want to be a dog!");

	std::cout << "c1: " << c1->getBrain()->getIdea(99) << std::endl;
	std::cout << "c2: " << c2->getBrain()->getIdea(99) << std::endl;
	std::cout << "c2: " << c2->getBrain()->getIdea(0) << std::endl;

	std::cout << "c1 brain's address: " << c1->getBrain() << std::endl;
	std::cout << "c2 brain's address: " << c2->getBrain() << std::endl;

	delete c1;
	delete c2;

	return 0;
}