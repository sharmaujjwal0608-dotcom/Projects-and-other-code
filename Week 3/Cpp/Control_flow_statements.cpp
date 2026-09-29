#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main() {
    if(10 > 5){
        cout << "1" << endl;
    }
    if(10 < 20){
        cout << "2" << endl;
    }
    if(5 > 1){
        cout << "3" << endl;
    }
    else{
        cout << "4" << endl;
    }



    // Largest of 2 numbers
    int a = 100, b = 45;
    if (a >= b){
        cout << "a" << endl;
    }
    else{
        cout << "b" << endl;
    }
    


    // even or odd
    int n = 8;
    if(n % 2 == 0){
        cout << "even" << endl;
    }
    else{
        cout << "odd" << endl;
    }



    // valid voter
        int n = 21;
    if(n >= 18){
        cout << "Valid Voter" << endl;
    }
    else{
        cout << "Not a Valid Voter" << endl;
    }



    // week days
    int day = 2;

    if(day == 1){
        cout << "Monday" << endl;
    }
    else if (day == 2){
        cout << "Tuesday" << endl;
    }
    else if (day == 3){
        cout << "Wednesday" << endl;
    }
    else if (day == 4){
        cout << "Thursday" << endl;
    }
    else if (day == 5){
        cout << "Friday" << endl;
    }
    else if (day == 6){
        cout << "Saturday" << endl;
    }
    else if (day == 7){
        cout << "Sunday" << endl;
    }
    else{
        cout << "Invalid" << endl;
    }



    // Number is positive or negative
    int n = 10;

    if(n > 0){
        cout << "Positive" << endl;
    }
    else if (n < 0){
        cout << "Negative" << endl;
    }  
    else{
        cout << "Zero" << endl;
    }



    // Leap year
    int year = 2000;

    if((year % 4 == 0 && year % 100 != 0) or (year % 400 == 0)){
        cout << "Leap year" << endl;
    }
    else{
        cout << "Not a Leap year" << endl;
    }



    // Vowel or consonant
    char ch;
    cin >> ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout << "Vowel" << endl;
    }
    else{
        cout << "Consonant" << endl;
    }



    // Upper or Lower case
    char ch;
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << "Lower Case" << endl;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout << "Upper Case" << endl;
    }
    else{
        cout << "Invalid" << endl;
    }



    // shop discount
    int amt;
    int bill = 0;
    float dis = 0;
    cin >> amt;

    if (amt > 5000 && amt <= 7000){
        dis = 0.05;
    }
    else if (amt > 7000 && amt <= 9000){
        dis = 0.1;
    }
    else if (amt > 9000){
        dis = 0.2;
    }
    
    int disAmt = float(amt*dis);
    float bill = amt - disAmt;

    cout << bill << endl;



    // Electricity bill
    int u;
     double bill = 50.00;
     cin >> u;

     if(u <= 100){
          bill = bill + u*1.50;
     }
     else if(u <= 200){
          bill += 100*1.50 + (u-100)*2.50;
     }
     else if(u <= 300){
          bill += 100*1.50 + 100*2.50 + (u-200)*4.00;
     }
     else if(u > 300){
          bill += 100*1.50 + 100*2.50 + 100*4.00 + (u-300)*5.00;
     }

    cout << fixed << setprecision(2) << bill << endl;




    // Terniary operators
    // condition ? true : false
    // a >= b/ a : b 

    int a = 90, b = 100;

    int max = (a >= b) ? a : b;
    cout << max << endl;




    // switch
    switch (day){
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wedday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6: cout << "Saturday" << endl; break;
        case 7: cout << "Sunday" << endl; break;
        default: cout << "Invalid input" << endl; break;
    }



    char ch = 'e';

    switch(ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout << "Vowel" << endl; break;

    default: cout << "Consonant";
    }

    return 0;
}


// There are three ways to control flow a statement
// 1. Conditional statement
// 2. Switch
// 3. Loops

