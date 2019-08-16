#include <bits/stdc++.h>
using namespace std;

class Customer
{
private:
    friend class GetCustomerData;
    string name;

public:
    Customer(string name)
    {
        this->name = name;
    }
};

class GetCustomerData
{
public:
    static string getName(Customer &customer)
    {
        return customer.name;
    }
};

int main()
{
    Customer tom("tom");
    cout << "Customer name : " << GetCustomerData::getName(tom) << endl;
    return 0;
}
