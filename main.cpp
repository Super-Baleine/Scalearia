#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int i;
    float a,b,x,y;
    float vectal;

    cout << "Which ?\n1)By coordinates\n2) By cosinus\n3) to quit\n> ";
    cin >> i;

    if (i == 1){
        cout << "\nWe have : vector u(x;y) & vector v(a;b)\nEnter the value of x : ";
        cin >> x;
        cout << "\nEnter the value of y : ";
        cin >> y;
        cout << "\nEnter the value of a : ";
        cin >> a;
        cout << "\nEnter the value of b : ";
        cin >> b;
        //Processing
        cout << "\nProcessing...";
        vectal=((x)*(a))+((y)*(b));
        cout << "\nScalar product of u&v is : " << vectal<<"\n";
        return main();
    }

    if (i == 2){
        cout << "\n\nWe have : vector_u * vector_v = ||u||*||v||*cos(u,v)";
        cout << "\nEnter the value of ||u|| : ";
        cin >> a;
        cout << "\nEnter the value of ||v|| : ";
        cin >> b;
        cout << "Enter the value of cos(u,v) (degree) : ";
        cin >> y;
        //Processing
        cout << "\nProcessing...";
        vectal=(a)*(b)*(y);
        cout << "\nScalar product of u&v is : " << vectal << "\n";
        return main();
    }
    if (i == 3){cout<<"\Bye bye ! :)";return 0;}
    if ( i != 2 || i != 1){
        cout << "\nSo, bye... and fck u.";
    }

return 0;}
