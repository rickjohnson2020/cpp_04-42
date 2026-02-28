#include "./Animal.hpp"
#include "./WrongAnimal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongCat.hpp"

int main() {

	std::cout << "===== TEST 1 =====" << std::endl;

	const int N = 10;
	const Animal* animal[N];

	for (int i = 0; i < N; i++) {
		if (i < N / 2)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}
	std::cout << std::endl;
	for (int i = 0; i < N; i++) {
		delete animal[i];
	}
	std::cout << std::endl;

	std::cout << "\n===== TEST 2 ======" << std::endl;

	Dog d1;
	std::cout << std::endl;
	if (!d1.getBrain()->setIdea(0, "I want to be a cat!"))
		std::cout << "Index out of range" << std::endl;
	else
		std::cout << "Idea set. Index: 0" << std::endl;

	if (!d1.getBrain()->setIdea(100, "..."))
		std::cout << "Index out of range" << std::endl;
	else
		std::cout << "Idea set. Index: 100" << std::endl;
	std::cout << std::endl;

	Dog d2 = d1;
	std::cout << std::endl;
	if (!d2.getBrain()->setIdea(0, "I don't want to be a cat!"))
		std::cout << "Index out of range" << std::endl;
	else
		std::cout << "Idea set. Index: 0" << std::endl;

	std::cout << std::endl;

	std::string idea;

	std::cout << "d1's idea[0]: " << (d1.getBrain()->getIdea(0, idea) ? idea : "Index out of range") << std::endl;
	std::cout << "d2's idea[0]: " << (d2.getBrain()->getIdea(0, idea) ? idea : "Index out of range") << std::endl;
	std::cout << "d2's idea[100]: " << (d2.getBrain()->getIdea(100, idea) ? idea : "Index out of range") << std::endl;
	std::cout << std::endl;

	std::cout << "d1 brain's address: " << d1.getBrain() << std::endl;
	std::cout << "d2 brain's address: " << d2.getBrain() << std::endl;
	std::cout << std::endl;


	Cat *c1 = new Cat();
	std::cout << std::endl;
	if (!c1->getBrain()->setIdea(99, "I want to be a dog!"))
		std::cout << "Index out of range" << std::endl;
	else
		std::cout << "Idea set. Idex: 99" << std::endl;

	Cat *c2 = new Cat(*c1);
	std::cout << std::endl;
	if (!c2->getBrain()->setIdea(99, "I don't want to be a dog!"))
		std::cout << "Index out of range" << std::endl;
	else
		std::cout << "Idea set. Idex: 99" << std::endl;
	std::cout << std::endl;

	std::cout << "c1's idea[99]: " << (c1->getBrain()->getIdea(99, idea) ? idea : "Index out of range") << std::endl;
	std::cout << "c2's idea[99]: " << (c2->getBrain()->getIdea(99, idea) ? idea : "Index out of range") << std::endl;
	std::cout << "c2's idea[0]: " << (c2->getBrain()->getIdea(0, idea) ? idea : "Index out of range") << std::endl;
	std::cout << std::endl;

	std::cout << "c1 brain's address: " << c1->getBrain() << std::endl;
	std::cout << "c2 brain's address: " << c2->getBrain() << std::endl;
	std::cout << std::endl;

	delete c1;
	delete c2;

	return 0;
}