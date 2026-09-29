#include <iostream>
using namespace std;

int main(){
    // start
    int i = 1;
    do{
        // statement
        cout<< "Hello" << endl;
        // steps
    }while(i<=5);
    return 0;
}


    // do while loop which always runs minimum 1 times whether the condition is true or false






    // Description
    // An ISBN-10 (International Standard Book Number) consists of 10 digits. 
    // Your task is to write a function to determine whether a given ISBN-10 number is valid or not. 
    // Rules: • Multiply each digit of the ISBN-10 by its position value (1 for the first digit, 2 for the second digit, and so on,
    // up to 10 for the last digit). Sum these products. • If the total sum is divisible by 11, the ISBN-10 is considered valid. 
    // Otherwise, it is invalid.


// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     // Must be exactly 10 digits
//     if (s.length() != 10) {
//         cout << "false" << endl;
//         return 0;
//     }

//     int sum = 0;
//     for (int i = 0; i < 10; i++) {
//         int val = (s[i] == 'X' || s[i] == 'x') ? 10 : (s[i] - '0');
//         sum += val * (i + 1);
//     }

//     if (sum > 0 and sum % 11 == 0) {
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }

//     return 0;
// }