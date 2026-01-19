// Hi equals hi Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <cassert>
using namespace std;

int strcmp_case_insensitive(string a, string b)
{
    int i = 0;
    while (i < a.length() && i < b.length())
    {
        char c1 = tolower(a[i]);
        char c2 = tolower(b[i]);

        if (c1 != c2)
            return c1 - c2;

        i++;
    }
    return a.length() - b.length();
}


void Tests()
{
    assert(strcmp_case_insensitive("Hi", "hi") == 0);
    assert(strcmp_case_insensitive("Aryan", "aryan") == 0);
    assert(strcmp_case_insensitive("apple", "banana") < 0);
    assert(strcmp_case_insensitive("Zoo", "ant") > 0);
    assert(strcmp_case_insensitive("hi", "high") < 0);
}

int main()
{
    Tests();
    cout << "All tests passed!" << endl;
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
