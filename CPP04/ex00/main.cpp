#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    cat->makeSound(); //will output the cat sound!
    dog->makeSound();
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    // Wrong Animals
    const WrongAnimal* a = new WrongAnimal();
    const WrongAnimal* b = new WrongCat();
    const WrongCat* c = new WrongCat();
    std::cout << a->getType() << std::endl;
    std::cout << b->getType() << std::endl;
    std::cout << c->getType() << std::endl;
    a->makeSound(); //will output of Animal sound
    b->makeSound();
    c->makeSound();

    delete a;
    delete b;
    delete c;
    return 0;
}