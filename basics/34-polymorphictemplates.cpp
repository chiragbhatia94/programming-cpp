#include "bits/stdc++.h"
using namespace std;

class Pizza
{
public:
    virtual void makePizza() = 0;
};

class NYStyleCrust
{
public:
    string addIngredient()
    {
        return "Crust so think you can see through it!\n";
    }
};

class DeepDishCrust
{
public:
    string addIngredient()
    {
        return "Super awesome Chicago deep dish crust!\n";
    }
};

template <typename T>
class LotsOfMeat : public T
{
public:
    string addIngredient()
    {
        return "Lots of tasty meat, " + T::addIngredient();
    }
};

template <typename T>
class Vegan : public T
{
public:
    string addIngredient()
    {
        return "Vegan Cheese & healthy veggies, " + T::addIngredient();
    }
};

template <typename T>
class MeatNYStyle : public T, public Pizza
{
public:
    void makePizza()
    {
        cout << "Meat NY style Pizza: " << T::addIngredient();
    }
};

template <typename T>
class VeganDeepDish : public T, public Pizza
{
public:
    void makePizza()
    {
        cout << "Vegan Deep Dish Pizza: " << T::addIngredient();
    }
};

int main()
{
    vector<unique_ptr<Pizza>> pizzaOrders;
    pizzaOrders.emplace_back(new MeatNYStyle<LotsOfMeat<NYStyleCrust>>());
    pizzaOrders.emplace_back(new VeganDeepDish<Vegan<DeepDishCrust>>());

    for (auto &pizza : pizzaOrders)
    {
        pizza->makePizza();
    }

    return 0;
}