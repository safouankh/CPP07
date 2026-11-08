# CPP07

A C++ project focused on generic programming, templates, and safe container design.

This repository contains three exercises from the C++ Modules curriculum, each demonstrating a different use of templates in modern C++98-style code.

## Project Overview

The goal of the project is to practice:

- Function templates
- Class templates
- Generic algorithms
- Memory management and bounds checking
- C++ operator overloading

## Exercises

### ex00 - Whatever

Implements generic template functions for:

- `swap(T &a, T &b)`
- `min(T a, T b)`
- `max(T a, T b)`

These functions work with any type supporting comparison and assignment.

Build and run:

```bash
cd ex00
make
./whatever
```

### ex01 - Iter

Implements a templated `iter` function that applies a callback to each element of an array.

Example usage includes:

- printing values
- incrementing numbers
- converting characters to uppercase

Build and run:

```bash
cd ex01
make
./iter
```

### ex02 - Array

Implements a custom `Array<T>` class template with:

- dynamic allocation
- `[]` operator access
- bounds checking with `std::out_of_range`
- copy constructor and assignment operator
- proper memory cleanup

Build and run:

```bash
cd ex02
make
./array
```

## Repository Structure

```text
CPP07/
├── ex00/
│   ├── main.cpp
│   ├── makefile
│   └── whatever.hpp
├── ex01/
│   ├── main.cpp
│   ├── makefile
│   └── iter.hpp
├── ex02/
│   ├── Array.hpp
│   ├── main.cpp
│   └── makefile
├── README.md
└── en.subject (1).pdf
```

## Requirements

- C++ compiler with C++98 standard support
- GNU Make

## Notes

This project is intended to reinforce core C++ template mechanics and the standard practices used in the 42 School curriculum.

## Author

Created as part of the C++ Module 07 exercises.
