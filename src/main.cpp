#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {1, 2, 3};
    int sum = 0;

    for (int i : vec)
    {
        sum += i;
        std::cout << "sum + " << i << " = " << sum << std::endl;
    }

    return 0;
}