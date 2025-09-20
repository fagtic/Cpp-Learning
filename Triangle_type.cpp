#include<iostream>
using namespace std;

int main() {

    int a,b,c,sides;
    cout << "Enter the a \n";
    cin >> a;
    cout << " Enter the b \n";
    cin >> b;
    cout << "Enter the c \n";
    cin >> c;

    if (a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b){
        cout <<" Right angle Triangle. \n";
    }
    else {
        cout <<" Not a right angle triangle \n";
    }
    return 0;

}
