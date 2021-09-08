#include <iostream>

int main()
{
    std::string a;
    std::cin >> a;
    int res = 0, t = 0;
    for (int i = 0; i < a.length(); i++)
    {
        t = 0;
        char pre = a[i];
        while (a[i] == pre)
        {
            t++;
            i++;
        }
        i--;
        if (t > res)
            res = t;
    }
    std::cout << res;
    return 0;
}