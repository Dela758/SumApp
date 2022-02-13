#include<iostream>
using namespace std;

int main(){

    int sum = 0;
    int num;

    cout << "Press Ctrl C to end the program" << endl;

    cout << "Enter the numbers to add: " << endl;
    cin >> num;

    while(cin) {
        sum = sum + num;
        cin >> num;
    }

    cout << "Sum = " << sum << endl;
}
