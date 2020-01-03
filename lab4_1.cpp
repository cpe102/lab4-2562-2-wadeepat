#include<iostream>
#include<cmath>
using namespace std;

double FindY (int x){
    double y =(3*pow(x,3))+(2*2.71828)+(sqrt((x*x)+1))+(pow(2,(2*x)+1));
    return y;
}

int main(){
    int x;
    cout<<"Enter x = ";
    cin>>x;
    cout<<"Result Y = "<<FindY(x);
    return 0;
}

