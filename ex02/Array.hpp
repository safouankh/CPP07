#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
    private :
        T   *array;
        size_t len;
    public  :
        Array(void)
        {
            array = NULL;
            len = 0;
        }
        Array(unsigned int n) : array(NULL), len(0)
        {
            try
            {
                array = new T[n];
                len = n;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        Array &operator=(const Array& other)
        {
            if (&other != this)
            {
                delete[] array;
                this->len = other.len;
                this->array = new T[len];
                for (size_t i = 0; i < len; i++)
                {
                    this->array[i] = other.array[i];
                }
            }
            return *this;
        }
        Array(const Array &other) : array(NULL), len(0)
        {
            this->operator=(other);
        }
        T &operator[](size_t index)
        {
            if (index >= len)
                throw std::out_of_range("out of bound");
            return array[index];
        }
        size_t size(void)
        {
            return len;
        }
        ~Array()
        {
            delete[] array;
            array = NULL;
        }
};

#endif