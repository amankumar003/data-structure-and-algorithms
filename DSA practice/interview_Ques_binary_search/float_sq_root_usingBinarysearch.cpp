#include <iostream>
using namespace std;

int intsqroot(int n)
{
    int s = 0, e = n;
    long long int mid = s + (e - s) / 2;

    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
        
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number  " << endl;
    cin >> n;
    int tempsol = intsqroot(n);

    cout << "square root of your entered number is " << morePrecision(n, 3, tempsol);
}
