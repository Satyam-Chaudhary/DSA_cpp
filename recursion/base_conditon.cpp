#include <bits/stdc++.h>
using namespace std;

int cnt = 0; //GLOBAL VARIABLE --> can be used in all functions

void f(){
    if(cnt == 3)
        return;
    cout << cnt << endl;
    cnt++;
    f();
}
int main()
{
    f();
    return 0;
}