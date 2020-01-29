#include "../../helpers/helpers.cpp"
using namespace std;

vector<int> bubbleSort(vector<int> list)
{
    for (int i = 1; i < list.size(); i++)
    {
        int noOfSwitchesThisPass = 0;
        cout << "Pass " << i << ": ";
        printVector(list);
        for (int j = 0; j < list.size() - i; j++)
        {
            cout << "\tIs " << list[j] << ">" << list[j + 1];
            if (list[j] > list[j + 1])
            {
                cout << "\tSwitch" << endl;
                int a = list[j];
                list[j] = list[j + 1];
                list[j + 1] = a;
                noOfSwitchesThisPass++;
            }
            else
            {
                cout << "\tNo Switch" << endl;
            }
            cout << "\t";
            printVector(list);
        }
        if (noOfSwitchesThisPass == 0)
        {
            cout << "No swaps made in this pass, the list is now sorted" << endl;
            break;
        }
    }

    return list;
}

vector<int> bubbleSortInReverse(vector<int> list)
{
    for (int i = 0; i < list.size() - 1; i++)
    {
        int noOfSwitchesThisPass = 0;
        cout << "Pass " << i + 1 << ": ";
        printVector(list);
        for (int j = i + 1; j < list.size(); j++)
        {
            cout << "\tIs " << list[i] << ">" << list[j];
            if (list[i] > list[j])
            {
                cout << "\tSwitch" << endl;
                int a = list[i];
                list[i] = list[j];
                list[j] = a;
                noOfSwitchesThisPass++;
            }
            else
            {
                cout << "\tNo Switch" << endl;
            }
            cout << "\t";
            printVector(list);
        }
        if (noOfSwitchesThisPass == 0)
        {
            cout << "No swaps made in this pass, this means that this element is at its correct location" << endl;
        }
    }
    return list;
}
