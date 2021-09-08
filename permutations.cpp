#include <iostream>

int main()
{
    int n, le;
    std::cin >> n;

    if (n == 2 || n == 3)
        std::cout << "NO SOLUTION";
    else if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i += 2)
            std::cout << i << " ";

        for (int j = 2; j <= n; j += 2)
            std::cout << j << " ";
    }
    else
    {

        for (int j = 2; j <= n; j += 2)
            std::cout << j << " ";
        for (int i = 1; i <= n; i += 2)
            std::cout << i << " ";
    }

    return 0;
}