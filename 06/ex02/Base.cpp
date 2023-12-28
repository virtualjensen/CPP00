#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){
    std::cout << "Base destructor called" << std::endl;
}

Base *generate(void){
	std::srand((unsigned int)(time(NULL)));
    int random = std::rand() % 3;
    switch (random){
        case 0:
            std::cout << "Object A created" << std::endl;
            return new A();
        case 1:
            std::cout << "Object B created" << std::endl;
            return new B();
        case 2:
            std::cout << "Object C created" << std::endl;
            return new C();
        default:
            return NULL;
    }
}

void identify(Base *p){
    std::cout << "Pointer: ";
    if (dynamic_cast<A*>(p))
        std::cout << "The type is A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "The type is B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "The type is C" << std::endl;
    else
        std::cout << "Unknown Type" << std::endl;
}

void identify(Base &p){
    std::cout << "Reference: ";
    if (dynamic_cast<A*>(&p))
        std::cout << "The type is A" << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "The type is B" << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "The type is C" << std::endl;
    else
        std::cout << "Unknown Type" << std::endl;
}