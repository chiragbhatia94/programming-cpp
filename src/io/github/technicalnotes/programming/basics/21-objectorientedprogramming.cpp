#include "bits/stdc++.h"
using namespace std;

//  by default classes have private fields
class Animal
{
private:
    string name;
    double height;
    double weight;

    static int noOfAnimals;

public:
    // Constructors
    Animal()
    {
        this->name = "";
        this->height = 0;
        this->weight = 0;
        Animal::noOfAnimals++;
    }
    Animal(string, double, double);

    // Destructor
    ~Animal();

    // static method
    // this method can only access static member variables
    static int getNoOfAnimals() { return noOfAnimals; }

    // function declaration
    void setAll(string, double, double);

    void toString();

    // getter and setters
    string getName()
    {
        return this->name;
    }
    void setName(string name)
    {
        this->name = name;
    }

    double getHeight()
    {
        return this->height;
    }
    void setHeight(double height)
    {
        this->height = height;
    }

    double getWeight()
    {
        return this->weight;
    }
    void setWeight(double weight)
    {
        this->weight = weight;
    }
};

int Animal::noOfAnimals = 0;
Animal::Animal(string name, double height, double weight)
{
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->noOfAnimals++;
}

Animal::~Animal()
{
    cout << "Destructing " << name << "." << endl;
}

void Animal::setAll(string name, double height, double weight)
{
    this->name = name;
    this->height = height;
    this->weight = weight;
}

void Animal::toString()
{
    cout << "I'm " << name << " having " << this->height << " cms height and " << this->weight << " kgs weight." << endl;
}

class Dog : Animal
{
private:
    string sound = "Wooof";

public:
    // The Dogs constructor
    Dog(string, double, double, string);

    // The default constructor calls Animals default
    // constructor
    Dog() : Animal(){};

    // functions
    void makeSound()
    {
        cout << getName() << "says " << sound << endl;
    }

    // need to declare inherited functions for overriding
    void toString();

    // getter and setters
    string getSound()
    {
        return this->sound;
    }
    void setSound(string sound)
    {
        this->sound = sound;
    }

    void undefinedMethod();
};

Dog::Dog(string name, double height, double weight, string sound) : Animal(name, height, weight)
{
    this->sound = sound;
}

void Dog::toString()
{
    cout << "I'm " << getName() << " having " << this->getHeight() << " cms height and " << getWeight() << " kgs weight and I say  " << sound << "." << endl;
}

int main()
{
    Animal fred;
    fred.setName("fred");
    fred.setHeight(122);
    fred.setWeight(50);

    Animal tom("Tom", 133, 44);

    fred.toString();
    fred.setAll("Fred", 111, 44);
    fred.toString();

    tom.toString();

    Dog spot;
    spot.toString();
    // below line throws compilation error due to undefined reference
    // this means that if class is defiend but it has undefined members still we should be able to use this class
    // spot.undefinedMethod()
    return 0;
}