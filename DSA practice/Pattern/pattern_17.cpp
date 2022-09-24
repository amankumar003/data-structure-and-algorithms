#include <iostream>
using namespace std;

int main()
{

    int n, col, row;
    cin >> n;
    row = 1;
    //for printing space
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        row++;
        cout << endl;
    }
}
