#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v;
    int n;
    std::cin >> n;
    for (int i = 1; i < n; i++)
    {
        int t;
        std::cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        if (i != v[i - 1])
        {
            std::cout << i;
            break;
        }
    }
    return 0;
}