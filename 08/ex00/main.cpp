#include "EasyFind.hpp"
#include <deque>
#include <vector>
#include <list>
#include <sstream>

int main(int ac, char **av){
       if (ac != 2) {
        std::cerr << "Input element to find" << std::endl;
        return 1;
    }

    int toFind = std::atoi(av[1]);
    int array[] = {2002, 69, 420, 1, 42, 5, 6, 7, 8, 9};
    int array2[] = {99, 98, 97, 82, 65, 72};
    int size = sizeof(array) / sizeof(int);
    int size2 = sizeof(array2) / sizeof(int);

    //iterating through container of type vector
    std::vector<int> vector(array, array + size);
    try{
        int vector_type = easyfind(vector, toFind);
        std::cout << "Element " << vector_type << " found in Vector container" << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    //iterating through container of type deque
    std::deque<int> deque(array2, array2 + size2);
    try{
        int deque_type = easyfind(deque, toFind);
        std::cout << "Element " << deque_type << " found in Deque container" << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    //iterating through container of type list
    std::list<int> list(array, array + size);
    try{
        int list_type = easyfind(list, toFind);
        std::cout << "Element " << list_type << " found in List container" <<  std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }


    return 0;
}
