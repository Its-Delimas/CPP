#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numbers;
    cout << "Enter the length of numbers :\n";
    cin >> numbers;

    vector<int> k(numbers);

    cout << "Enter the numbers :" << endl;

    for (int i = 0; i < numbers; i++)
    {
        cin >> k[i];
    }

    for (int j : k)
    {
        cout << "Items :" << j << endl;
    }

    for (int i = 0; i < numbers; i++)
    {
        int key = k[i];
        int p = i - 1;

        while (p >= 0 && k[p] > key)
        {
            k[p + 1] = k[p];
            p--;
        }
        k[p + 1] = key;
    }
    cout << "Sorted List \n";
    for (int m : k)
    {

        cout << m << endl;
    }
    return 0;
}