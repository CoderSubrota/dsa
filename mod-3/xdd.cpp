#include <iostream>
using namespace std;

void printXPattern(int n)
{
    if (n % 2 == 0)
    {
        return;
    }

    int mid = n / 2;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j && i != mid)
            {
                
                cout << "\\";
            }
            else if (i + j == n - 1 && i != mid)
            {
                cout << "/";
            }
            else if (i == mid && j == mid)
            {
                cout << "X";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    printXPattern(n);

    return 0;
}
