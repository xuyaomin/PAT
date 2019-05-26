#include <iostream>

using namespace std;

inline bool even(int n)
{
    return n % 2 == 0;
}

int main()
{
    int n = 0;
    while (cin >> n)
    {
        int step = 0;
        while (n != 1)
        {
            if (even(n)) n /= 2;
            else n = (3 * n + 1) / 2;
            ++step;
        }
        if (n == 1) cout << step << endl;
    }

    return 0;
}