#include "./Animal.hpp"
#include "./WrongAnimal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongCat.hpp"


int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Dog type: " << j->getType() << " " << std::endl;
	std::cout << "Cat type: " << i->getType() << " " << std::endl;

	std::cout << "Cat makes sound: ";
	i->makeSound();

	std::cout << "Dog makes sound: ";
	j->makeSound();

	std::cout << "Animal makes sound: ";
	meta->makeSound();

	std::cout << "=============================" << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

	std::cout << "WrongCat type: " << k->getType() << " " << std::endl;
	std::cout << "WrongCat makes sound: ";
	k->makeSound();

	delete meta;
	delete j;
	delete i;

	delete wrongMeta;
	delete k;

	return 0;
}