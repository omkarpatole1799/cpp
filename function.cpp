// functions
// void > doesn't return anything
// return
// parameterised
// non parameterised

#include <iostream>
#include <math.h>
using namespace std;

void printName()
{
    cout << "hey striver";
}

void printAge(int age)
{
    cout << "your age is: " << age;
}

void doSomething(string s)
{
    s[0] = 't';
    cout << s << endl;
}
void doSomething1(int &x){  // &sign used because to pass the value by reference
    x += 10;
    cout << x << endl;
}

int main()
{
    // printName();  // this is non parameterised function
    // printAge(51); // this is parameterised function

    // int x, y;
    // cout << "enter number 1";
    // cin >> x;
    // cout << "enter number 2";
    // cin >> y;
    // int maxNo = max(x, y);
    // cout << maxNo;

    // this is pass by value > this doesnt change the original value it make copy of original element and send the value to funciton

    // string myStr = "raj";
    // doSomething(myStr);

    // pass by reference > this changes original value directly > array are pass by reference
    // eg

    int x = 10;
    doSomething1(x);
    cout << x;

    return 0;
}