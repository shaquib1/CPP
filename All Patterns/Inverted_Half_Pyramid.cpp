#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;

    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}