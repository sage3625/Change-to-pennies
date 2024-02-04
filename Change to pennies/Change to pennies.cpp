// Create a program that has a user input number of coins (quarters, dimes, nickels, and pennies) and converts it into pennies

#include <iostream>
using namespace std;


int main()
{
    int change, quarters, dimes, nickels, pennies;
    cout << "How many quarters were given?: ";
    cin >> quarters;
    change = quarters * 25;
    cout << "How many dimes were given?: ";
    cin >> dimes;
    change = change + (dimes * 10);
    cout << "How many nickels were given?: ";
    cin >> nickels;
    change = change + (nickels * 5);
    cout << "How many pennies were given?: ";
    cin >> pennies;
    change = change + pennies;
    cout << "The total of change converted to pennies is: " << change << endl;

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
