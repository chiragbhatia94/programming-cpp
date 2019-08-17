#include <bits/stdc++.h>
using namespace std;

int getRandom(int max)
{
    srand(time(NULL));
    return rand() % max;
}

void executeThread(int id)
{
    auto nowTime = chrono::system_clock::now(); // give current time in milliseconds
    time_t sleepTime = chrono::system_clock::to_time_t(nowTime);
    tm localTime = *localtime(&sleepTime);

    cout << "Thread #" << id << " sleep time " << ctime(&sleepTime) << endl;

    this_thread::sleep_for(chrono::seconds(getRandom(6)));
    nowTime = chrono::system_clock::now();
    sleepTime = std::chrono::system_clock::to_time_t(nowTime);

    cout << "Thread #" << id << " awake time " << ctime(&sleepTime) << endl;
}

int main()
{
    thread th1(executeThread, 1);
    th1.join();
    thread th2(executeThread, 2);
    th2.join();
    thread th3(executeThread, 3);
    th3.join();
    return 0;
}