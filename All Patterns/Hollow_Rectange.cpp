#include <iostream>
using namespace std;

int main()
{

    int l, w;
    cout << "Enter the length of rectangle : ";
    cin >> l;
    cout << "Enter the width of rectangle : ";
    cin >> w;

    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (i == 1 || i == l || j == 1 || j == w)
                cout << "*";

            else
                cout << " ";
        }
        cout<<endl;
    }

    return 0;
}