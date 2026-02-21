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
	
	std::cout << "=================" << std::endl;

	Dog* dog = new Dog();
	dog->getBrain()->setIdea(0, "I want to be a cat!");

	Cat* cat = new Cat();
	cat->getBrain()->setIdea(0, "I want to be a dog!");


	return 0;
}