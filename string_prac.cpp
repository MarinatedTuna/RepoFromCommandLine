/******************************************************************************
 *
 *                               Online C++ Compiler.
 *                                              Code, Compile, Run and Debug C++ program online.
 *                                              Write your code in this editor and press "Run" button to compile and execute it.
 *
 *                                              *******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string prac = "";
    
    prac.push_back('H');
    prac.push_back('e');
    prac.push_back('c');
    prac.push_back('k');
    cout << prac << endl;
    
    cout << prac.substr(2, 2) << endl;
    
    cout << prac.find("ec") << endl; //bool
    
    prac += "ing";
    
    cout << prac << endl;

    return 0;
}
