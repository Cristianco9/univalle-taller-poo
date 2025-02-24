#include<iostream>
#include<math.h>

using namespace std;

// Ejercicio 1:
int fn1() {
    cout<<"*****************START***********************";
    float radius, lngt, area, vlmn;
    double pi = 3.14159265358;

    cout<<"********************************************";
    cout<<"\nEnter the value of the radius: ";cin>>radius;
    
    lngt = 2 * pi * radius;
    area = pi * pow(radius,2);
    vlmn = 1.3333333 * pi * pow(radius,3);

    cout<<"\nThe length of the circumference: "<<lngt;
    cout<<"\nThe area of the circle: "<<area;
    cout<<"\nThe volume of the sphere: "<<vlmn;

    cout<<"\n******************END***********************";
    return 0;
}

// Ejercicio 2:
int fn2() {
    cout<<"*****************START***********************";
    float a, b, c, res;
    double pi = 3.14159265358;

    cout<<"********************************************";
    cout<<"\nEnter the value of the size a: ";cin>>a;
    cout<<"\nEnter the value of the size b: ";cin>>b;
    cout<<"\nEnter the value of the size c: ";cin>>c;
    
    res = (0.25 * (sqrt((4 * pow(a,2) * pow(b,2)) - pow((pow(a,2) + pow(b,2) - pow(c,2)),2))));
 

    cout<<"\nThe area of the triangle is: "<<res<<endl;

    cout<<"\n******************END***********************";
    return 0;
}

// Ejercicio 3:
int fn3() {
    cout<<"*****************START***********************";
    float celcius, farenheit;

    cout<<"********************************************";
    cout<<"\nEnter the temperature in degrees celcius: ";cin>>celcius;

    farenheit = 32 + (9 * celcius / 5);
    cout<<"The temperature in degrees farenheit is: "<<farenheit;
 

    cout<<"\n********************************************";
    
    cout<<"\n******************END***********************";
    return 0;
}

// Ejercicio 4:
int fn4() {
    cout<<"*****************START***********************";
    float c1, c2, h;

    cout<<"********************************************";
    cout<<"\nEnter the value of the leg 1: ";cin>>c1;
    cout<<"\nEnter the value of the leg 2: ";cin>>c2;

    h = sqrt(pow(c1,2) + pow(c2, 2));
    cout<<"The value of the hypotenuse is: "<<h;
 

    cout<<"\n********************************************";
    
    cout<<"\n******************END***********************";
    return 0;
}

// Ejercicio 5:
int fn5() {
    cout<<"*****************START***********************";

    double f1, f2, angle, angle_radial, res=0;
    const double pi = 3.141592653589793;

    cout<<"********************************************";
    cout<<"\nEnter the magnitude of the first force (N): ";cin>>f1;
    cout<<"\nEnter the magnitude of the second force (N): ";cin>>f2;
    cout<<"\nEnter the angle between both forces (degrees): ";cin>>angle;

    angle_radial = angle * (pi / 180.0);
    res = sqrt(pow(f1, 2) + pow(f2,2) + 2 * f1 * f2 * cos(angle_radial));
    cout<<"\nThe resulting force is: "<<res<<" N";
 

    cout<<"\n********************************************";
    
    cout<<"\n******************END***********************";
    return 0;
}

// Ejercicio 6:
int fn6() {
    cout<<"*****************START***********************";
    float celcius, kelvin;

    cout<<"********************************************";
    cout<<"\nEnter the temperature in degrees celcius: ";cin>>celcius;

    kelvin = celcius + 273;
    cout<<"The temperature in degrees Kelvin is: "<<kelvin;
 

    cout<<"\n********************************************";
    
    cout<<"\n******************END***********************";
    return 0;
}

// Ejercicio 7:
int fn7() {
    cout<<"*****************START***********************";
     int x = 23;
     int y = 24;
     int z = 25;

     int res = 0;

    cout<<"********************************************";
    cout<<"\nThe variable x value is: "<<x;
    cout<<"\nThe variable y value is: "<<y;
    cout<<"\nThe variable z value is: "<<z;

    res = x + y + z;
    cout<<"\nThe result of the sum of the variables x, y, z is: "<<res;
 

    cout<<"\n********************************************";
    
    cout<<"\n******************END***********************";
    return 0;
}

// Ejercicio 8:
int fn8() {
    cout<<"*****************START***********************";

    double data1=0, data2=0, res=0;

    cout<<"********************************************";
    cout<<"\nEnter the data1 value: ";cin>>data1;
    cout<<"\nEnter the data2 value: ";cin>>data2;

    if(data2 == 0) {
        cout<<"\nError division for 0 not allowed";
    } else {
        res = data1/data2;
        cout<<"\nThe result of the division is: "<<res;
    }

    cout<<"\n********************************************";
    
    cout<<"\n******************END***********************";
    return 0;
}

// Ejercicio 9:
int fn9() {
    cout<<"*****************START***********************";

    int year=0;

    cout<<"********************************************";
    cout<<"\nEnter the year: ";cin>>year;

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout<<"\nThe year is a leap year";
    } else {
        cout<<"\nThe year is not a leap year";
    }

    cout<<"\n********************************************";
    
    cout<<"\n******************END***********************";
    return 0;
}

// Main Fn
// Descomentar la función que se quiera ejecutar
int main() {
    //fn1();
    //fn2();
    //fn3();
    //fn4();
    //fn5();
    //fn6();
    //fn7();
    //fn8();
    //fn9();
}