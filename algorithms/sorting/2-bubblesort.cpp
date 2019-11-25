#include "../../helpers/helpers.cpp"
using namespace std;

vector<int> bubbleSort(vector<int> list);

int main()
{
    vector<int> list = generateRandomIntegerVector(10, 5, 50);

    vector<int> sortedList = bubbleSort(list);

    cout << "Original list: ";
    printVector(list);
    cout << "Sorted list: ";
    printVector(sortedList);
    return 0;
}

vector<int> bubbleSort(vector<int> list)
{
    for (int i = 1; i < list.size(); i++)
    {
        int noOfSwitchesThisPass = 0;
        cout << "Pass " << i << ": ";
        printVector(list);
        for (int j = 0; j < list.size() - i; j++)
        {
            cout << "\tIs " << list[j] << ">" << list[j + 1] << endl;
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
