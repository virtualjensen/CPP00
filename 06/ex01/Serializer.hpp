#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h> 
#include <iostream>

struct Data{
    int num;
    float   f;
    double  d;
	std::string str;
	char        c;
};

class Serializer{
    private:
        Serializer();
    public:
        Serializer(const Serializer&);
        Serializer &operator=(const Serializer&);
        ~Serializer();

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif