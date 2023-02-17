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
void pattern4(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j ++){
            cout << i;
        }
        cout << endl;
    }
}


int main()
{
    cout << "enter how much test cases: ";
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "enter num: ";
        int n;
        cin >> n;
        // pattern1(n);
        // pattern2(n);
        // pattern3(n);
        pattern4(n);

    }
    return 0;
}