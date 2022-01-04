#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * @brief 
 * @paragraph Question finding odd sum
 *  @snippet description  {For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.}

}
 * 
 * @param inp 
 * @return long long 
 */





long long summa(long long inp)  {return inp%2 == 0  ? inp/2 /** @param True */: (-1)*((inp+1)/2)/** @param False*/;}
/**
 * @brief 
 *  if inp is even return n/2
 *  if inp is odd return (-1)*(n+1)/2 
 * @return int 
 */




int main()
{   
    long long k;
    cin >> k;
    cout << summa(k) << endl;
}
