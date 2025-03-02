#include<iostream>
#include<math.h>

using namespace std;

// Ejercicio 1:
int fn1() {
    float a, b;

    cout<<"\n********************************************";
    cout<<"\nEnter the first number a: ";cin>>a;
    cout<<"\nEnter the second number b: ";cin>>b;
    if (a > b) {
        cout<<"\nThe number a is bigger: "<<a; 
    } else {
        cout<<"\nThe number b is bigger: "<<b;  
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 2:
int fn2() {
    float a, b, c;
    cout<<"\n********************************************";
    cout<<"\nEnter the first number a: ";cin>>a;
    cout<<"\nEnter the second number b: ";cin>>b;
    cout<<"\nEnter the second number c: ";cin>>c;
    if (a > b && a > c) {
        cout<<"\nThe number a is bigger: "<<a; 
    } else if (b > a && b > c) {
        cout<<"\nThe number b is bigger: "<<b; 
    } else if (c > a && c > b) {
        cout<<"\nThe number c is bigger: "<<c;  
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 3:
int fn3() {
    int n;
    cout<<"\n********************************************";
    cout<<"\nEnter the number: ";cin>>n;
    if (n % 2 == 0) {
        cout<<"\nIs a par number: "; 
    } else  {
        cout<<"\nIs a impar number: "; 
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 4:
int fn4() {
    float n;
    cout<<"\n********************************************";
    cout<<"\nEnter the number: ";cin>>n;
    if (n >= 0) {
        cout<<"\nIs a positive number: "; 
    } else  {
        cout<<"\nIs a negative number: "; 
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 5:
int fn5() {
    cout<<"\n********************************************";
    string c;
    cout<<"\nEnter an alphabetic character: ";cin>>c;
    if (c == "a" || c == "e" || c == "i" || c == "o" || c == "u") {
        cout<<"\nIt's a lowercase vowel";  
    }  else {
        cout<<"\nIt's not a lowercase vowel";  
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 6:
int fn6() {
    cout<<"\n********************************************";
    string c;
    cout<<"\nEnter an alphabetic character: ";cin>>c;
    if (c == "a" || c == "e" || c == "i" || c == "o" || c == "u") {
        cout<<"\nIt's a lowercase vowel";  
    } else if (c == "A" || c == "E" || c == "I" || c == "O" || c == "U") {
        cout<<"\nIt's a uppercase vowel";   
    } else {
        cout<<"\nThe character it's not a vowel";  
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 7:
int fn7() {
    cout<<"\n********************************************";
    int age;
    cout<<"\nEnter the user age: ";cin>>age;
    if (age >= 18 && age <=25) {
        cout<<"\nThe user is in the range [18-25] "; 
    } else {
        cout<<"\nThe user is outside the range [18-25] ";  
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 8:
int fn8() {
    cout<<"\n********************************************";
    int n1,n2,n3,n4;
    cout<<"\nEnter the first number: ";cin>>n1;
    cout<<"\nEnter the second number: ";cin>>n2;
    cout<<"\nEnter the thrid number: ";cin>>n3;;
    cout<<"\n********************************************";
    cout<<"\n********************************************";
    cout<<"\nEnter the fourth number: ";cin>>n4;
    if (n4 == n1) {
        cout<<"\nfourth number is equal to first number. "<<n1<<" = "<<n4;
    } else if (n4 == n2) {
        cout<<"\nfourth number is equal to second number. "<<n2<<" = "<<n4;
    } else if (n4 == n3) {
        cout<<"\nfourth number is iequal to thrid number. "<<n1<<" = "<<n3;
    } else {
        cout<<"\nFourth number not is equal to previews three numbers";
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 9:
int fn9() {
    cout<<"\n********************************************";
    int n;
    cout<<"\nEnter a number between 1 and 10.\nTo interchange to roman numbers: ";cin>>n;
    switch (n) {
        case 1:
            cout<<"\nThe number "<<n<<" in Roman numbers is I";
            break;
        case 2:
            cout<<"\nThe number "<<n<<" in Roman numbers is II";
            break;   
        case 3:
            cout<<"\nThe number "<<n<<" in Roman numbers is III";
            break;   
        case 4:
            cout<<"\nThe number "<<n<<" in Roman numbers is IV";
            break;   
        case 5:
            cout<<"\nThe number "<<n<<" in Roman numbers is V";
            break;   
        case 6:
            cout<<"\nThe number "<<n<<" in Roman numbers is VI";
            break;
        case 7:
            cout<<"\nThe number "<<n<<" in Roman numbers is VII";
            break;
        case 8:
            cout<<"\nThe number "<<n<<" in Roman numbers is VIII";
            break;
        case 9:
            cout<<"\nThe number "<<n<<" in Roman numbers is IX";
            break;
        case 10:
            cout<<"\nThe number "<<n<<" in Roman numbers is X";
            break;  
        default:
            cout<<"\nThe number "<<n<<" is outside the range [1,10].\nTry again";
        break;
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 10:
int fn10() {
    cout<<"\n********************************************";
    int m;
    cout<<"\nEnter a month number between 1 and 12. : ";cin>>m;
    switch (m) {
        case 1:
            cout<<"\nThe number "<<m<<" is January";
            break;
        case 2:
            cout<<"\nThe number "<<m<<" is February";
            break;   
        case 3:
            cout<<"\nThe number "<<m<<" is March";
            break;   
        case 4:
            cout<<"\nThe number "<<m<<" is April";
            break;   
        case 5:
            cout<<"\nThe number "<<m<<" is May";
            break;   
        case 6:
            cout<<"\nThe number "<<m<<" is June";
            break;
        case 7:
            cout<<"\nThe number "<<m<<" is July";
            break;
        case 8:
            cout<<"\nThe number "<<m<<" is August";
            break;
        case 9:
            cout<<"\nThe number "<<m<<" is September";
            break;
        case 10:
            cout<<"\nThe number "<<m<<" is October";
            break;
        case 11:
            cout<<"\nThe number "<<m<<" is November";
            break;  
        case 12:
            cout<<"\nThe number "<<m<<" is December";
            break;   
        default:
            cout<<"\nThe number "<<m<<" is outside the range [1,12].\nTry again";
        break;
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 11:
int fn11() {
    cout<<"\n********************************************";
    double balance = 1000.0;
    int option;
    double amount;
    do {
        cout<<"\n*** ATM Simulator ***";
        cout<<"\nCurrent Balance: $"<<balance;
        cout<<"\n1. Check Balance";
        cout<<"\n2. Deposit Money";
        cout<<"\n3. Withdraw Money";
        cout<<"\n4. Exit";
        cout<<"\nChoose an option: ";
        cin>>option;
        switch(option) {
            case 1:
                cout<<"\nYour balance is: $"<<balance<<"\n";
                break;
            case 2:
                cout<<"\nEnter deposit amount: $";cin>>amount;
                if (amount > 0) {
                    balance += amount;
                    cout<<"\nDeposit successful. New balance: $"<<balance<<"\n";
                } else {
                    cout<<"\nInvalid deposit amount.\n";
                }
                break;
            case 3:
                cout<<"\nEnter withdrawal amount: $";
                cin>>amount;
                if(amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout<<"\nWithdrawal successful. New balance: $"<<balance<<"\n";
                } else {
                    cout<<"\nInvalid withdrawal amount or insufficient funds.\n";
                }
                break;
            case 4:
                cout<<"\nExiting ATM. Thank you for using our service!\n";
                break;
            default:
                cout<<"\nInvalid option. Please try again.\n";
                break;
        }
    } while(option != 4);
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 12:
int fn12() {
    cout<<"\n********************************************";
    int option, n, c;
    do {
        cout<<"\n*** MINI APP ***";
        cout<<"\n1. Cube number n*n*n === n^3";
        cout<<"\n2. Number impar or par";
        cout<<"\n3. Exit";
        cout<<"\nChoose an option: ";
        cin>>option;
        switch(option) {
            case 1:
                cout<<"\n********************************************";
                cout<<"\nEnter the number to calculate: ";cin>>n;
                cout<<"\n********************************************";
                c = pow(n,3);
                cout<<"\n("<<n<<"^3) = "<<c;
                cout<<"\n********************************************";
                break;
            case 2:
                cout<<"\n********************************************";
                cout<<"\nEnter a number: ";cin>>c;
                cout<<"\n********************************************";
                if (c % 2 == 0) {
                    cout<<"\nThe number is par";
                } else {
                    cout<<"\nThe number is impar";
                }
                cout<<"\n********************************************";
                break;
            case 3:
                cout<<"\n********************************************";
                cout<<"\nExiting...\n";
                cout<<"\n********************************************";
                break;
            default:
                cout<<"\n********************************************";
                cout<<"\nInvalid option. Please try again.\n";
                cout<<"\n********************************************";
                break;
        }
    } while(option != 3);
    cout<<"\n********************************************";
    return 0;
}

// Main Fn
int main() {
    cout<<"\n*****************START**********************";
    cout<<"\n******************MENU**********************";
    int option;
    cout<<"\n1. Calculate bigger number. f(a,b)"; 
    cout<<"\n2. Calculate bigger number. f(a,b,c)"; 
    cout<<"\n3. Calculate number is par or impar";
    cout<<"\n4. Calculate number is positive or negative";
    cout<<"\n5. Identify lowercase vowel";
    cout<<"\n6. Identify lowercase, uppercase vowels";
    cout<<"\n7. Calculate age range [18,25]";
    cout<<"\n8. Calculate identical numbers";
    cout<<"\n9. Interchange to Roman numbers";
    cout<<"\n10. Display year's months";
    cout<<"\n11. Simulate an ATM";
    cout<<"\n12. Mini Math app";
    cout<<"\n13. Exit";
    cout<<"\nEnter a option: ";cin>>option;

    switch (option)
    {
    case 1:
        fn1();
        break;
    case 2:
        fn2();
        break;
    case 3:
        fn3();
        break;
    case 4:
        fn4();
        break;
    case 5:
        fn5();
        break;
    case 6:
        fn6();
        break;
    case 7:
        fn7();
        break;
    case 8:
        fn8();
        break;
    case 9:
        fn9();
        break;
    case 10:
        fn10();
        break;
    case 11:
        fn11();
        break;
    case 12:
        fn12();
        break;
    case 13:
        cout<<"\n********************************************";
        cout<<"\nExiting...\n";
        cout<<"\n********************************************";
        break;
    default:
        cout<<"\n********************************************";
        cout<<"\nOption not allowed"; 
        cout<<"\n********************************************";
        break;
    }
    cout<<"\n******************END***********************";
}