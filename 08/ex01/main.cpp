#include "Span.hpp"
#include <iostream>
#include <ctime>

int main(){
    Span s(5);
    s.addNumber(-19999);
    s.addNumber(99999);

    try{
        s.printContent();
        std::cout << "longest span: " << s.longestSpan() << std::endl;
        std::cout << "shortest span: " << s.shortestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try{
        s.addNumber(4);
        s.addNumber(1);
        s.printContent();
        std::cout << "longest span: " << s.longestSpan() << std::endl;
        std::cout << "shortest span: " << s.shortestSpan() << std::endl;
        s.addNumber(1);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::srand(std::time(NULL));
    std::vector<int> vec(100);
    for (int i = 0; i < 100; i++) {
        int random = std::rand() % 100;
        if (random == 0)
		    vec[i] = random + i + 2;
        else
		    vec[i] = random;
    }
    Span s2(100);

    try {
        s2.fillSpan(vec.begin(), vec.end());
        std::sort(vec.begin(), vec.end());
        std::cout << "the shortest span is: " << s.shortestSpan() << std::endl;
        std::cout << "the longest span is: " << s.longestSpan() << std::endl;
        s2.printContent();
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}