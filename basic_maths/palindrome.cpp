#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int rev = 0 ,ld;
    int dup = n;
    while(dup != 0){
        ld = dup % 10;
        rev = rev * 10 + ld;
        dup = dup/ 10;
    }
    if(rev == n)
        return true;
    else 
        return false;
}
int main()
{
    int n = 101;

    cout << palindrome(n) << endl;
    return 0;
}