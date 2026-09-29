//Questions

#include <iostream>
using namespace std;
#include <cmath>

int main(){
    // Sum of two numbers
    int a, b;
    cout << "Enter a " << endl;
    cin >> a;
    cout << "Enter b " << endl;
    cin >> b;

    cout << "Sum of " << a << " and " << b << " = " << (a+b) << endl;



    //Custom message with input
    string name;
    int age;

    cout << "Enter name : " << endl;
    cin >> name;

    cout << "Enter age : " << endl;
    cin >> age;
    
    cout << "Hello \"" << name << "\" you are " << age << " years old " << endl;



    // calculate sum and average
    int x, y, z;
    int sum, avg;
    cout << "Enter three numbers " << endl;
    cin >> x >> y >> z;

    sum = x + y + z;
    avg = (float)sum / 3;
    cout << "Sum is " << sum << endl;
    cout << "Average is " << avg << endl;


    
    // Swap 2 numbers using third variable
    int s = 10, t = 20;
    int temp = s;
    s = t, t = temp;
    cout << s << " " << t << endl;



    // without using third variable
    int a = 10, b = 20;
    a = a+b; // 10 + 20 = 30
    b = a-b; // 30-20 = 10
    a = a-b; // 30-10 = 20
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}


// escape sequence - \", \\, \', \n = next line, \t tab