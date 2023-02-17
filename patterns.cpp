#include <iostream>
using namespace std;

// Pattern 1
// # # # #
// # # # #
// # # # #
// # # # #
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
}

// pattern 2
// #
// # #
// # # #
// # # # #
void pattern2(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
}

// pattern 3
// 1
// 12
// 123
// 1234
// 12345
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

// pattern 4
// 1
// 22
// 333
// 4444
// 55555
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

// pattern5
// ****
// ***
// **
// *
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
}

// pattern5
// 12345
// 1234
// 123
// 12
// 1
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
            // cout << n-i+1;
        }
        cout << endl;
    }
}

// pattern7
//   *
//  ***
// *****
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// pattern8
// *********
//  *******
//   *****
//    ***
//     *
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << "&";
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + i); j++)
        {
            cout << "*";
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "&";
            cout << " ";
        }
        cout << endl;
    }
}

// pattern9
//  1234
//  1234
//  1234
void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

// pattern10
void pattern10(int n){
    for(int i = 1; i <=n ; i++)    {
        for(int j = 1; j <= n; j++){
            cout << n-j+1;
        }
        cout << endl;
    }
}

// pattern11
void pattern11(int n){
    for (int i = 0; i < n; i++){
        for (int j= 0; j<n;j++){
            cout << j;
        }
        for (int j=0; j< 2*n-(2*i+1); j++){
            cout << " ";
        }
        for (int j = 0; j < n; j++){
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    // cout << "enter how much test cases: ";
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout << "enter num: ";
        int n;
        cin >> n;
        // pattern1(n);
        // pattern2(n);
        // pattern3(n);
        // pattern4(n);
        // pattern5(n);
        // pattern6(n);
        // pattern7(n);
        // pattern8(n);
        // pattern9(n);
        // pattern10(n);
        pattern11(n);


    }
    return 0;
}