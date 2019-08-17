#include "../../helpers/helpers.cpp"
using namespace std;

vector<int> worstUnkownSort(vector<int> list);
int main()
{
    // vector<int> list = generateRandomIntegerVector(10, 5, 50);
    vector<int> list{0, 35, 5, 6, 14, 39, 23, 49, 19, 19, 47};

    vector<int> sortedList = worstUnkownSort(list);

    cout << "Original list: ";
    printVector(list);
    cout << "Sorted list: ";
    printVector(sortedList);
    return 0;
}

vector<int> worstUnkownSort(vector<int> list)
{
    for (int i = 0; i < list.size() - 1; i++)
    {
        int noOfSwitchesThisPass = 0;
        cout << "Pass " << i + 1 << ": ";
        printVector(list);
        for (int j = i + 1; j < list.size(); j++)
        {
            cout << "\tIs " << list[i] << ">" << list[j] << endl;
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
