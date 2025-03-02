#include<iostream>
#include<math.h>

using namespace std;

// Ejercicio 1:
int fn1() {
    double a, b, res;

    cout<<"\n********************************************";
    cout<<"\nEnter the first number a: ";cin>>a;
    cout<<"\nEnter the second number b: ";cin>>b;
    res = (a/b)+1;
    cout<<"\n("<<a<<" / "<<b<<") + 1 = "<<res;
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 2:
int fn2() {
    double a, b, c, d, res;

    cout<<"\n********************************************";
    cout<<"\nEnter the first number a: ";cin>>a;
    cout<<"\nEnter the second number b: ";cin>>b;
    cout<<"\nEnter the third number c: ";cin>>c;
    cout<<"\nEnter the fourth number d: ";cin>>d;
    res = (a+b)/(c+d);
    cout<<"\n("<<a<<" + "<<b<<") / ("<<c<<" + "<<d<<") = "<<res;
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 3:
int fn3() {
    double a, b, c, d, e, f, res;

    cout<<"\n********************************************";
    cout<<"\nEnter the first number a: ";cin>>a;
    cout<<"\nEnter the second number b: ";cin>>b;
    cout<<"\nEnter the third number c: ";cin>>c;
    cout<<"\nEnter the fourth number d: ";cin>>d;
    cout<<"\nEnter the fourth number e: ";cin>>e;
    cout<<"\nEnter the fourth number f: ";cin>>f;
    res = (a + (b/c)) / (d+(e/f));
    cout<<"\n("<<a<<" + ("<<b<<" / "<<c<<") / ("<<d<<" + ("<<e<<" / "<<f<<") = "<<res;
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 4:
int fn4() {
    cout<<"\n********************************************";
    double a, b, c, d, res;
    cout<<"\nEnter the first number a: ";cin>>a;
    cout<<"\nEnter the second number b: ";cin>>b;
    cout<<"\nEnter the third number c: ";cin>>c;
    cout<<"\nEnter the fourth number d: ";cin>>d;
    res = (a + (b/(c-d)));
    cout<<"\n("<<a<<" + ("<<b<<" / ("<<c<<" - "<<d<<"))) = "<<res;
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 5:
int fn5() {
    cout<<"\n********************************************";
    float a, b, c;
    cout<<"\nEnter the first number a: ";cin>>a;
    cout<<"\nEnter the second number b: ";cin>>b;
    c = a;
    a = b;
    b = c;
    cout<<"\nNumber a: "<<a;
    cout<<"\nNumber b: "<<b;
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 6:
int fn6() {
    cout<<"\n********************************************";
    float n1, n2, n3, nF;
    cout<<"\nEnter the first qualification: ";cin>>n1;
    cout<<"\nEnter the second qualification: ";cin>>n2;
    cout<<"\nEnter the third qualification: ";cin>>n3;
    nF = (n1 + n2 + n3) / 3;
    cout<<"\nThe final qualification is: "<<nF;
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 7:
int fn7() {
    cout<<"\n********************************************";
    float nPrac, nTheo, nPart, nF;
    cout<<"\nEnter the practices qualification: ";cin>>nPrac;
    cout<<"\nEnter the theoretical qualification: ";cin>>nTheo;
    cout<<"\nEnter the participation qualification: ";cin>>nPart;
    nF = ((nPrac * 0.30) + (nTheo * 0.60) + (nPart * 0.10));
    cout<<"\nThe final qualification is: "<<nF;
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 8:
int fn8() {
    cout<<"\n********************************************";
    float cO, cA, h;
    cout<<"\nEnter the adjacent leg: ";cin>>cA;
    cout<<"\nEnter the opposite leg: ";cin>>cO;
    h = sqrt(pow(cA,2) + pow(cO, 2));
    cout<<"\nThe hypotenuse of the triangle is: "<<h;
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 9:
int fn9() {
    cout<<"\n********************************************";
    float x, y, f;
    cout<<"\nEnter the variable x: ";cin>>x;
    if (x < 0) {
        cout<<"\nx must be greater than zero";
    } else {
        cout<<"\nEnter the variable y: ";cin>>y;
        if ((y != -1) &&( y != 1)) {
            f = (sqrt(x) / (pow(y,2) - 1));
            cout<<"\nThe function result is: "<<f;
        } else {
            cout<<"\nDivision by zero not allowed";
            cout<<"\ny must be different than -1, and 1";
        }
    }
    cout<<"\n********************************************";
    return 0;
}

// Ejercicio 10:
int fn10() {
    cout<<"\n********************************************";
    float a, b, c, s1, s2, disc, det;
    cout<<"\nEnter the variable a: ";cin>>a;
    cout<<"\nEnter the variable b: ";cin>>b;
    cout<<"\nEnter the variable c: ";cin>>c; 
    if (a != 0) {
        disc = pow(b,2) - (4*a*c);
        if (disc < 0) {
            cout<<"\nHas no real solutions";
        } else {
            det = sqrt(disc);
            s1 = ((-b+disc) / (2*a));
            s2 = ((-b-disc) / (2*a));
            cout<<"\nSolution 1: "<<s1;
            cout<<"\nSolution 2: "<<s2;
        }
    } else {
        cout<<"\na must be different than zero";
    }

    cout<<"\n********************************************";
    return 0;
}

// Main Fn
int main() {
    cout<<"\n*****************START**********************";
    cout<<"\n******************MENU**********************";
    int option;
    cout<<"\n1. Calculate (a / b) + 1"; 
    cout<<"\n2. Calculate (a + b) / (c + d)"; 
    cout<<"\n3. Calculate (a + (b / c) / (d + (e / f)";
    cout<<"\n4. Calculate (a + (b / (c - d)))";
    cout<<"\n5. Interchange 2 numbers";
    cout<<"\n6. Calculate final qualification";
    cout<<"\n7. Calculate average qualification";
    cout<<"\n8. Calculate triangle hypotenuse";
    cout<<"\n9. Calculate f(x,y)";
    cout<<"\n10. Calculate quadratic function";
    cout<<"\n11. Exit";
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
        break;
    default:
        cout<<"\n********************************************";
        cout<<"\nOption not allowed"; 
        cout<<"\n********************************************";
        break;
    }
    cout<<"\n******************END***********************";
}