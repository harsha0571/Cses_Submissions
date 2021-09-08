#include <iostream>
int main()
{
    long long a;
    std::cin >> a;
    std::cout << a << " ";
    while (a != 1)
    {
        if (a % 2 == 0)
            a /= 2;
        else
            a = 3 * a + 1;

        std::cout << a << " ";
    }
    return 0;
}