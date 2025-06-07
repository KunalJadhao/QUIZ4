#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n = 5; //rows

    for (int i = 1; i <= n; i++) {
        //for loop inside for loop
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            cout << i <<  " ";
        }

        cout << endl; //
    }

    return 0;
}