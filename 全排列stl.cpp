#include <iostream>  
#include <algorithm>  
#include <string>  
  
using namespace std;  
  
int main()  
{  
    string str;  
    cin >> str;  
    cout << str << endl; 
    sort(str.begin(),str.end());  
    while (next_permutation(str.begin(), str.end()))  
        cout << str << endl;  
    return 0;  
}  