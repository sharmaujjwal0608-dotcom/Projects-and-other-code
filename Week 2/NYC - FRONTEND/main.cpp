#include <iostream>
using namespace std;

int main() {
    //Comments in Cpp are created using // or we can use /* at starting and */ at ending
    int num1; //variable declaration
    num1 = 10; //variable initialization
    int num2 = 20; //combination of both
    num2 = 90;

    cout << num1 << endl;  // for printing
    cout << num2 << endl;  

    auto a = 3.14; // this function automatically determines the data type

    int in = 21;
    long l = 2143567889;

    float f = 90.56;
    double d = 90;

    char ch = 'a';
    bool b = true;

    cout << in << endl;
    cout << l << endl;
    cout << f << endl;
    cout << d << endl;
    cout << ch << endl;
    cout << b << endl;

    cout << a << endl;

    cout << sizeof(a) << endl;

    int aa;
    cout << aa << endl; //when we dont assign a value to a variable a randow value is printed also known as garbage value



    //typechange
    int n = 90;
    double db = n; //Implicit type conversion - when a small data type is put into thee big data type
    cout << db << endl;

    double num = 15649293764830;
    int i = num; // in this we do oppossite of implicit type conversion - explicit type conversion
    cout << i << endl;



    //Question  
    //Sum of 2 numbers
    int z = 13, y = 45;
    cout << z+y << endl;



    // for input
    int number;
    cout << "enter a number" << endl;
    cin >> number; // for taking input
    cout << "value of a =" << number << endl;



    //operators
    // Arthimetic +, -, /, %, * - same as in pyton
    // realational operators <, >, <=, >=, !=
    // these answer in 1 or 0 
    // 1 is true
    // 0 is false
    cout << (a>b) << endl;
    cout << (a<b) << endl;
    cout << (a>=b) << endl;
    cout << (a<=b) << endl;
    cout << (a!=b) << endl;

    //assignment operator  =, +=, -=, *=, /= same as in python
    
    //logical operators  and = &&, or = //, not = ! 
    //work same as python
    cout << ((1 < 5) && (20 < 30)) << endl;



    //increment and decrement
    // increment = ++
    // it is of 2 types
    // post increment = a++ and pre increment = ++a
    int a1 = 1;
    cout << (a1++) << endl;
    cout << (a1) << endl;
    int a2 = 1;
    cout << (++a2) << endl;
    cout << (a2) << endl;

    // decrement = --
    // post decrement = a-- and pre decrement = --a
    cout << (a1--) << endl;
    cout << (a1) << endl;
    cout << (--a2) << endl;
    cout << (a2) << endl;



    /* n= 123
    123/10 = 12 only the quoitent
    123%10 = 3  the remainder
    */



    //ASCII VALUES
    char cha = 'A';
    cout << (cha) << endl;
    //by doing the same we can find ASCII values of other numbers and digits
    // A = 65 , a = 97, 0 = 48



    

    return 0;
}









/*
Variables - They are containers where data is stored
We can't name a varibale from a number or any other symbol
We can start it from underscore or any alphabet and end it at ony number or alphabet
there is no space allowed in the variable name
No keyword cannot be used as a variable name
Follow camel case or snake case


Data types = there are multiple data types in cpp such as lonf int floaat double char bolean etc


 
*/



