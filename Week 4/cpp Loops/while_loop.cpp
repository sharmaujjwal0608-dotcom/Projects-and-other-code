#include <iostream>
using namespace std;

int main(){
    // int n = 5;

    // // start
    // int i = 1;

    // // condition
    // while (i<=n){
    //     // statement
    //     cout <<"hello" << endl;
    //     // step
    //     i++;
    // }



    // Q 1
    // int n = 543;

    // while (n>0)
    // {
    //     int lastdigit = m%10;
    //     cout << lastdigit << endl;
    //     n = n/10;
    // }
    


    // Description
    // Given a positive integer N, print each digit of the number separately using a while loop. The digits should be printed in the same order as they appear in the original number, with each digit separated by a space. For example, if the input is 12345, the output should be: 1 2 3 4 5 Use a while loop to process the digits.

    // Input Format
    // The input contains a single integer N.

    // Output Format
    // Print each digit of N separately in the same order as the original number, with digits separated by spaces
   
    // #include <iostream>
    // using namespace std;

    // int main() {
    //     int n;
    //     cin >> n;

    //     int divisor = 1;
    //     int temp = n;

    //     // Find the first digit's place value
    //     while (temp >= 10) {
    //         temp = temp / 10;
    //         divisor = divisor * 10;
    //     }

    //     while (divisor > 0) {
    //         int digit = n / divisor;
    //         cout << digit << " ";

    //         n = n % divisor;
    //         divisor = divisor / 10;
    //     }

    //     return 0;
    // }   
    
    
    // check if the number is strong or not
    int n = 145;
    int copy = n;
    int sum = 0;

    while (n > 0)
    {
        int lastd = n % 10;
        int fact = 1;
        for(int i = 1; i <= lastd;i++){
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }
    
    cout << ((sum == copy)? "Strong number" : "Not a strong number" )<< endl;



    // Description
    // Given a non-negative integer N, check whether it is an Armstrong Number using a while loop. An Armstrong number is a number in which the sum of each digit raised to the power of the total number of digits is equal to the original number. For example: 153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 Therefore, 153 is an Armstrong Number. Print "Armstrong Number" if the number satisfies the condition; otherwise, print "Not an Armstrong Number". Important: The power is based on the number of digits, not always 3.

    // Input Format
    // The input contains a single non-negative integer N.

    // Output Format
    // Print: Armstrong Number if N is an Armstrong number. Otherwise, print: Not an Armstrong Number


    long long n;
    if (!(cin >> n)) return 0;

    if (n == 0) {
        cout << "Armstrong Number\n";
        return 0;
    }

    // Step 1: Count digits using while loop
    long long temp = n;
    int num_digits = 0;
    while (temp > 0) {
        num_digits++;
        temp /= 10;
    }

    // Step 2: Calculate digit power sum
    temp = n;
    long long total_sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        long long power = 1;
        for (int i = 0; i < num_digits; i++) {
            power *= digit;
        }
        total_sum += power;
        temp /= 10;
    }

    // Step 3: Output result
    if (total_sum == n) {
        cout << "Armstrong Number\n";
    } else {
        cout << "Not an Armstrong Number\n";
    }

    return 0;
}


