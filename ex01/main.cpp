#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(const T &x)
{
    std::cout << x << " ";
}

template <typename T>
void addOne(T &x)
{
    x += 1;
}

void toUpper(char &c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
}

int main()
{
    std::cout << "---- INT TEST ----" << std::endl;

    int arr[] = {1,2,3,4,5};

    iter(arr, 5, print<int>);
    std::cout << std::endl;

    iter(arr, 5, addOne<int>);

    iter(arr, 5, print<int>);
    std::cout << std::endl;



    std::cout << "\n---- DOUBLE TEST ----" << std::endl;

    double d[] = {1.1,2.2,3.3};

    iter(d, 3, print<double>);
    std::cout << std::endl;



    std::cout << "\n---- STRING TEST ----" << std::endl;

    std::string s[] = {"hello","world","templates"};

    iter(s, 3, print<std::string>);
    std::cout << std::endl;



    std::cout << "\n---- CHAR TEST ----" << std::endl;

    char c[] = {'a','b','c','d'};

    iter(c, 4, print<char>);
    std::cout << std::endl;

    iter(c, 4, toUpper);

    iter(c, 4, print<char>);
    std::cout << std::endl;

    return 0;
}