#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int a = 0, b = 0, c = 0, d = 0;
    int jia = 0, yi = 0;
    while (n-- > 0)
    {
        cin >> a >> b >> c >> d;
        if (b == a + c && d != a + c) yi++;
        if (d == a + c && b != a + c) jia++;
    }

    cout << jia << " " << yi;

    return 0;
}