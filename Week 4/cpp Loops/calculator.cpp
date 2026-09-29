#include <iostream>
using namespace std;

int main(){
    int choice;
    double a, b;
    cout<< "-----Welcome to my calculator-----\n";

    do{
        cout << "Press\n1.Addition\n2.Substraction\n3.Multiply\n4.Divison\n5.Exit\n";
        cout << "Enter your choice: " << endl;
        cin >> choice;

        if (choice >= 1 && choice <= 4){
            cout << "Enter two numbers: " << endl;
            cin >> a >> b;
        }

        switch (choice)
        {
        case 1: 
            cout << "Sum: " << (a+b) << endl;
            break;

        case 2: 
            cout << "Substraction: " << (a-b) << endl;
            break;

        case 3: 
            cout << "Multiply: " << (a*b) << endl;
            break;

        case 4: {
            if(b>0)
                cout << "Divide: " << (a/b) << endl;
            else
                cout << "b is zero" << endl;
            break;
        }

        case 5:
            break;

        default: cout << "Invalid Choice" << endl;
            break;
        }

    } while (choice != 5);
    


    return 0;
}