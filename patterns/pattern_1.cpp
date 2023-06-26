// ****
// ****
// ****
// ****
// ****
//outer loop --> no. of rows
//inner loop --> no. of columns and connect them to the rows

#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
} 