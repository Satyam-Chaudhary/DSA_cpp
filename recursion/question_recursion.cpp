#include <bits/stdc++.h>
using namespace std;

void name_5_times(int i, int n)
{
    if (i > n)
        return;
    cout << "SATYAM" << endl;
    name_5_times(i + 1, n);
}

void from_1_to_n(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    from_1_to_n(i + 1, n);
}

void from_n_to_1(int i, int n)
{
    if (i < 1)
        return;
    cout << i << endl;
    from_n_to_1(i - 1, n);
}

void from_1_to_n_using_backtracking(int i, int n)
{
    if (i < 1)
        return;
    from_1_to_n_using_backtracking(i - 1, n);
    cout << i << endl;
}

void from_n_to_1_using_backtracking(int i, int n)
{
    if (i > n)
        return;
    from_n_to_1_using_backtracking(i + 1, n);
    cout << i << endl;
}

void print_sum_parameter(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    print_sum_parameter(i - 1, sum + i);
}

int print_sum_function(int n)
{
    if (n == 0)
        return 0;
    else
        return n + print_sum_function(n - 1);
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

void reverse_an_array_without_recursion(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n / 2; i++)
        swap(arr[i], arr[n - 1 - i]);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void reverse_an_array_with_recursion(int i, int arr[] , int n){
    if(i >= n/2)
        return;
    swap(arr[i] , arr[n-i-1]);
    reverse_an_array_with_recursion(i+1 , arr , n);
}

bool string_palindrome(int i, string &s , int len){
    if(i >= len/2)
        return true;
    if(s[i] != s[len-1-i])
        return false;
    return string_palindrome(i+1 , s , len);
}

int main()
{
    // int n;
    // cin >> n;
    
    // name_5_times(1 , n);
    // from_1_to_n(1,n);
    // from_n_to_1(n,n);
    // from_1_to_n_using_backtracking(n,n);
    // from_n_to_1_using_backtracking(1 , n);
    // print_sum_parameter(n , 0);
    // cout << print_sum_function(n) << endl;
    // cout << factorial(n) << endl;
    
    // reverse_an_array_without_recursion(n);
    // int arr[n];
    // for(int i = 0 ; i < n ; i++)cin >> arr[i];
    // reverse_an_array_with_recursion(0 , arr, n);
    // for(int i = 0 ; i < n ; i++) //--> Array are pointers thus the change done inside the function persists outside the function as well
    //         cout << arr[i] << " ";
    //     cout << endl;
    
    string s;
    getline(cin , s);
    int len = s.size();
    cout << string_palindrome(0 , s , len)<<endl;

    
    return 0;
}