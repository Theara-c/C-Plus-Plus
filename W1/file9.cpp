#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter positive number ";
    cin >> n;
    if (n > 0)
    {
        for (int i = 2; i < n; i++)
        {
            if ((i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) ||
                i == 2 || i == 3 || i == 5 || i == 7)
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        cout << "wrong type ";
    }
    return 0;
}