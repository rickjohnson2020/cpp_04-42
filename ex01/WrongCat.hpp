#ifndef WRONG_CAT_H
#define WRONG_CAT_H

#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);

	void makeSound() const;
};

#endif