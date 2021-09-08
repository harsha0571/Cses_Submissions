#include <iostream>
#include <vector>

int main()
{
    long long n, res = 0;
    std::cin >> n;
    std::vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        long long a;
        std::cin >> a;
        v.push_back(a);
    }
    for (int i = 1; i < n; i++)
    {
        long long t;
        t = v[i] - v[i - 1];
        if (t < 0)
        {
            res -= t;
            v[i] = v[i - 1];
        }
    }
    std::cout << res;
    return 0;
}