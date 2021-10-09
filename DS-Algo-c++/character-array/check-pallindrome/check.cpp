#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of char: ";
    cin >> n;
    char array[n + 1];
       bool temp = 1;

    cout << endl
         << "Enter any char for check pallindrome char: ";
    cin >> array;

    for (int i = 0; i < n; i++)
    {
        if (array[i] != array[n - i - 1])
        {
            temp = 0;
            break;
        }
    }

    if (temp == true){
        cout << endl
             << "Char is pallindrome";}

    else
        cout << endl
             << "Not pallindrome";

    return 0;
}
