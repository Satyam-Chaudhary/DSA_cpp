#include <iostream>
using namespace std;

void pattern5(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        // star1
        for (int k = 0; k < n - i; k++)
        {
            cout << "*";
        }
        // star2
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8_right(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    // pattern1
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    // pattern2
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        // star1
        for (int k = 0; k < n - i; k++)
        {
            cout << "*";
        }
        // star2
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern10_right(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 != 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
        }
        cout << endl;
    }
}

void pattern11_other(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // intitialising 3rd variable
        int start = 1;
        // by relation the starting of  rows to row number
        if (i % 2 != 0)
            start = 1;
        else
            start = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            // nice way to switch between 0 and 1
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // part1
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        // part2
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char c = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
}

void pattern14_right(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char c = 'A';
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
}

void pattern15_right(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    char c = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c;
        }
        c++;
        cout << endl;
    }
}

void pattern16_right(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // alphabet
        char ch = 'A';
        // introducing breakpoint variable
        int breakpoint = i;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch;
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << char(ch + n - i);
            ch++;
        }
        cout << endl;
    }
}

void pattern19(int n){
    
}

int main()
{
    int n;
    cin >> n;
    // right --> have less time and space complexity
    //  pattern5(n);
    //  pattern6(n);
    //  pattern7(n);
    //  pattern8(n);
    //  pattern8_right(n);
    //  pattern9(n);
    //  pattern10(n);
    //  pattern10_right(n);
    //  pattern11(n);
    //  pattern11_other(n);
    //  pattern12(n);
    //  pattern13(n);
    //  pattern14(n);
    //  pattern14_right(n);
    //  pattern15(n);
    // pattern15_right(n);
    // pattern16(n);
    // pattern16_right(n);
    // pattern17(n);
    // pattern18(n);
    pattern19(n);
    return 0;
}