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

	Dog* d3 = new Dog(d1);
	d3->getBrain()->setIdea(0, "I want to be a hero!");

	std::cout << "d1: " << d1.getBrain()->getIdea(0) << std::endl;
	std::cout << "d2: " << d2.getBrain()->getIdea(0) << std::endl;
	std::cout << "d2: " << d2.getBrain()->getIdea(100) << std::endl;
	std::cout << "d3: " << d3->getBrain()->getIdea(0) << std::endl;

	Cat c1;
	Cat c2;
	c1.getBrain()->setIdea(99, "I want to be a dog!");
	c2 = c1;
	c2.getBrain()->setIdea(99, "I don't want to be a dog!");

	std::cout << "c1: " << c1.getBrain()->getIdea(99) << std::endl;
	std::cout << "c2: " << c2.getBrain()->getIdea(99) << std::endl;
	std::cout << "c2: " << c2.getBrain()->getIdea(0) << std::endl;

	return 0;
}