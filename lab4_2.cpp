#include<iostream>

using namespace std;

double findDistance(double u,double a,double t){
  return (u*t)+0.5*a*t*t;
}

int main(){
  double u,a,t;
  cout<<"Enter u = ";
  cin>>u;
  cout<<"Enter a = ";
  cin>>a;
  cout<<"Enter t = ";
  cin>>t;
  cout<<"s = "<<findDistance(u,a,t);


  return 0;
}
