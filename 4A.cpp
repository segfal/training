
#include <iostream>
 
 
int main()
{
    int numput;
    std::cin >> numput;
    if(numput > 2 && numput%2 == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}
