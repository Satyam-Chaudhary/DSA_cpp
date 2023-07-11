#include <bits/stdc++.h>
using namespace std;

void extraction_of_digit(int n)
{
    // for(int i = 0 ; i <n ; i++){
    //     cout << (n % 10) << endl;
    //     n /= 10;
    // }
    int count = 0;
    while (n > 0)
    {
        cout << (n % 10) << endl;
        n /= 10;
        count++;
    }
    cout << "Number of digits are --> " << count << endl;
    // TC --> log
}

int reverse_number(int n)
{
    int reverseNumber = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        n /= 10;
        reverseNumber = (reverseNumber * 10) + last_digit;
    }
    return reverseNumber;
}

bool palindrome(int n)
{
    long long rn = 0; // reverse number
    auto dup = n;     // duplicate for check
    while (n > 0)
    {
        auto ld = n % 10;
        n /= 10;
        rn = (rn * 10) + ld;
    }
    if (rn == dup)
        return true;
    return false;
}

string armstrongNumber(int n)
{
    int dup = n;
    int c = 0;
    while (dup > 0)
    {
        dup = dup / 10;
        c++;
    }
    int sum = 0;
    dup = n;
    while (dup > 0)
    {
        int ld = dup % 10;
        dup = dup / 10;
        sum = sum + pow(ld, c);
    }
    if (sum == n)
        return "Yes";
    return "No";
}

void print_all_divisor(int n)
{
    // int i = 1;
    // while(i <= n){
    //     if(n % i == 0)
    //         cout << i << " ";
    //     i++;
    // }
    // cout << endl;

    // BETTER APPROACH

    int i = 1;
    int sqrtn = sqrt(n);
    vector<int> v;
    while (i <= sqrtn)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
        i++;
    }
    sort(v.begin(), v.end());
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void prime_number(int n)
{
    int c = 0; // count variable
    int sqrtn = sqrt(n);
    for (int i = 1; i <= sqrtn; i++) // can write like this to not call sqrt. function everytime
    {
        if (n % i == 0)
        {
            c++;
            if (n / i != i)
                c++;
        }
    }
    if (c == 2)
        cout << "PRIME NUMBER" << endl;
    else
        cout << "NOT PRIME NUMBER" << endl;
}

void find_GCD_brute_force(int x, int y)
{
    int GCD = 1;
    // for (int i = 1; i <= min(x, y); i++)
    // {
    //     if (x % i == 0 && y % i == 0)
    //     {
    //         GCD = i;
    //     }
    // }

    // other method

    for (int i = min(x, y); i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            GCD = i;
            break;
        }
    }
    cout << GCD << endl;
}

void find_GCD_euclideon_algo(int x, int y)
{   
    int gcd;
    if(x == 0 || y == 0){
        gcd = 0;
        cout << gcd << endl;
        return;
    }
    
    while (x > 0 && y > 0)
    {
        if (x >= y)
            x = x % y;
        else
            y = y % x;
    }
    if (x == 0)
        gcd = y;
    if (y == 0)
        gcd = x;
    
    cout << gcd << endl;
}

int main()
{
    // int n;
    // cin >> n;

    // extraction_of_digit(n);
    // cout << reverse_number(n) << endl;
    // cout << palindrome(n) << endl;
    // cout << armstrongNumber(n) << endl;
    // print_all_divisor(n);
    // prime_number(n);

    int x, y;
    cin >> x >> y;

    // find_GCD_brute_force(x, y);
    find_GCD_euclideon_algo(x, y);

    return 0;
}