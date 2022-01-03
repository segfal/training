#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



string get_input(string prompt) {
    if(prompt.size()< 1)
    {
        return "wrong input";
    }
    if(prompt.size() < 2)
    {
        return prompt;
    }
    
    
    vector<char> input;
    string res;

    for(int i=0 ; i<prompt.size() ; i++) {
        if(prompt[i] > 47 and prompt[i] < 58) {
            //cout << prompt[i];
            input.push_back(prompt[i]);
        }
    }
    sort(input.begin(), input.end());
    for(int i=0 ; i<input.size() - 1 ; i++) {
        res += input[i];
        res += '+';
    }
    //cout << res << endl;
    res += input[input.size() - 1];
    //cout << res << endl;

    return res;
    
    
}



int main()
{
    string x;
    cin >> x;
    x = get_input(x);
    cout << x << endl;
   
}


