#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound(); //will output the cat sound!
    dog->makeSound();

    delete dog;
    delete cat;

    /* Shouldn't work <- comment out when doing eval... */
    // Animal test; // <-- ERROR: Abstract class
    // const Animal* meta = new Animal(); // <-- Same here!

    return 0;
}
