#include <iostream>

int main()
{

    int t, x, y, m, n;
    std::cin >> t;
    while (t--)
    {
        std::cin >> y >> x;
        m = x > y ? x : y;
        n = x > y ? y : x;
        m = (m * m) - ~(m % 2 ? y - x : x - y) - n;
        std::cout << m;
    }

    return 0;
}