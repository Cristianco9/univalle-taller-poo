#include<iostream>

using namespace std;

// Ejercicio 1:
int fn1() {
    double n1, n2, add, sub, mult, div;

    cout<<"\n********************************************";
    cout<<"\nEnter the first number: ";cin>>n1;
    cout<<"\nEnter the second number: ";cin>>n2;

    add = n1+n2;
    sub = n1-n2;
    mult = n1*n2;

    cout<<"\n"<<n1<<" + "<<n2<<" = "<<add;
    cout<<"\n"<<n1<<" - "<<n2<<" = "<<sub;
    cout<<"\n"<<n1<<" * "<<n2<<" = "<<mult;

    if (n2 != 0) {
        div = n1 / n2;
        cout<<"\n"<<n1<<" / "<<n2<<" = "<<div; 
    } else {
        cout<<"\nDivision by zero not allowed";
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 2:
int fn2() {
    cout<<"\n********************************************";
    float tax, taxValue;
    double product, finalPrice;
    cout<<"\nEnter the product price: ";cin>>product;
    cout<<"\nEnter the product tax.\nBetween 0 and 100: ";cin>>tax;
    taxValue = (product * tax) / 100;
    finalPrice = product + taxValue;
    cout<<"\nThe final price is: "<<finalPrice;
    cout<<"\n********************************************";
    return 0;
}


// Ejercicio 3:
int fn3() {
    cout<<"\n********************************************";
    int age=0;
    string gender;
    float height=0;
    cout<<"\nEnter your age: ";cin>>age;
    cout<<"\nEnter your gender: ";cin>>gender;
    cout<<"\nEnter your height in CM: ";cin>>height;
    cout<<"\n********************************************";
    cout<<"\n********************************************";
    cout<<"\nUser data";
    cout<<"\nAge: "<<age;
    cout<<"\nGender: "<<gender;
    cout<<"\nHeight: "<<height<<" Cm";
    cout<<"\n********************************************";
    return 0;
}

// Main Fn
// Descomentar la función que se quiera ejecutar
int main() {
    cout<<"\n*****************START**********************";
    cout<<"\n******************MENU**********************";
    int option;
    cout<<"\n1. calculate arithmetic operations"; 
    cout<<"\n2. calculate product tax"; 
    cout<<"\n3. Enter user data";
    cout<<"\n4. Exit";
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
        break;
    default:
        cout<<"\n********************************************";
        cout<<"\nOption not allowed"; 
        cout<<"\n********************************************";
        break;
    }
    cout<<"\n******************END***********************";
}