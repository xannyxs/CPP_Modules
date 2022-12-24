//
// Created by Xander Voorvaart on 9/6/22.
//

#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base::~Base()
{
    return ;
}

Base*   generate(void)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 2);

    switch (distr(gen) % 3)
    {
        case e_ClassA:
            std::cout << "Returning Class A" << std::endl;
            return (new A);


        case e_ClassB:
            std::cout << "Returning Class B" << std::endl;
            return (new B);

        case e_ClassC:
            std::cout << "Returning Class C" << std::endl;
            return (new C);
    }
    return (nullptr);
}

void identify_from_pointer(Base* p)
{
	A* ClassA = dynamic_cast<A*>(p);
	B* ClassB = dynamic_cast<B*>(p);
	C* ClassC = dynamic_cast<C*>(p);

    if (ClassA != nullptr)
        std::cout << "Im class A" << std::endl;
    else if (ClassB != nullptr)
        std::cout << "Im class B" << std::endl;
    else if (ClassC != nullptr)
        std::cout << "Im class C" << std::endl;
    return ;
}

void identify_from_reference(Base& p)
{
	try
	{
		A ClassA = dynamic_cast<A&>(p);
		(void) ClassA;
		std::cout << "Im class A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
	}

	try
	{
		B ClassB = dynamic_cast<B&>(p);
		(void) ClassB;
		std::cout << "Im class B" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
	}

	try
	{
		C ClassC = dynamic_cast<C&>(p);
		(void) ClassC;
		std::cout << "Im class C" << std::endl;
	}
	catch (const std::bad_cast& e)
	{
	}
}