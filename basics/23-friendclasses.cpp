#include <bits/stdc++.h>
using namespace std;

class Customer;

class GetCustomerData
{
public:
    static string getName(Customer &);
};

class Customer
{
private:
    string name;

public:
    // friend class GetCustomerData;
    friend string GetCustomerData::getName(Customer &);
    Customer(string name)
    {
        this->name = name;
    }
};

string GetCustomerData::getName(Customer &customer)
{
    return customer.name;
}

int main()
{
    Customer tom("tom");
    cout << "Customer name : " << GetCustomerData::getName(tom) << endl;
    return 0;
}
