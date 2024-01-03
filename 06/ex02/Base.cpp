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
    if (dynamic_cast<A*>(p))
        std::cout << "Pointer type is A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Pointer type is B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Pointer type is C" << std::endl;
}

void identify(Base &p){
    try{
        A &a = (dynamic_cast<A&>(p));
        std::cout << "Reference type is A" << std::endl;
        (void)a;
        return ;
    }
    catch (std::exception &e){};
    try{
        B &b = (dynamic_cast<B&>(p));
        std::cout << "Reference type is B" << std::endl;
        (void)b;
        return ;
    }
    catch (std::exception &e){};
    try{
        C &c = (dynamic_cast<C&>(p));
        std::cout << "Reference type is C" << std::endl;
        (void)c;
        return ;
    }
    catch (std::exception &e){};
}