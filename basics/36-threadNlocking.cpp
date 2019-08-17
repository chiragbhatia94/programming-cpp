#include <bits/stdc++.h>
using namespace std;

char *getTime()
{
    chrono::time_point<chrono::system_clock> now = chrono::system_clock::now();
    time_t t = chrono::system_clock::to_time_t(now);
    return ctime(&t);
}

double accountBalance = 100;

mutex accountLock;

void getMoney(int id, double amount)
{
    lock_guard<mutex> lock(accountLock);
    this_thread::sleep_for(chrono::seconds(2));
    cout << id << " tries to withdraw Rs " << amount << " at " << getTime() << endl;
    if ((accountBalance - amount) >= 0)
    {
        accountBalance -= amount;
        cout << "New account balance is Rs " << accountBalance << endl;
    }
    else
    {
        cout << "Insufficient funds, current balance is Rs " << accountBalance << endl;
    }
}

int main()
{
    thread threads[10];
    for (int i = 0; i < 10; i++)
    {
        threads[i] = thread(getMoney, i, 15);
    }
    for (int i = 0; i < 10; i++)
    {
        threads[i].join();
    }

    return 0;
}