#ifndef ANIMAL_H // compile only if ANIMAL_H not defined
#define ANIMAL_H // define ANIMAL_H
#include <string>

using namespace std;

class Animal
{
public:
    string name;
    Animal();
    ~Animal();
};

Animal::Animal()
{
}

Animal::~Animal()
{
}

#endif // !ANIMAL_H // complete ifndef