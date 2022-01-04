#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;




int main()
{   
    int num;
    int inp;
    cin >> num;
    while(num > 0)
    {
        cin >> inp;
        if(inp == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
        num--;
    }

    cout << "EASY" << endl;
    return 0;
}
