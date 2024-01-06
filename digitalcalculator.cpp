#include<iostream>
#include<cmath>
using namespace std;
class Math{
    public:
     double z;
     double add(double x,double y){
        z = x + y;
        return z;
     };
     double sub(double x,double y){
        z = x - y;
        return z;
     };
     double multiply(double x,double y){
        z = x*y;
        return z;
     };
     double divide(double x,double y){
        z = x/y;
        return z;
     };
     double sine(double x){
        z = sin(x);
        return z;
     };
      double cosine(double x){
        z = cos(x);
        return z;
     };
      double tangent(double x){
        z = tan(x);
        return z;
     };
      double squareroot(double x){
        z = sqrt(x);
        return z;
     };
      double absolute(double x){
        z = fabs(x);
        return z;
     };
      double power(double x,double y){
        z = pow(x,y);
        return z;
     };
      double hypotenuse(double x,double y){
        z = hypot(x,y);
        return z;
     };
     double floor1(double x){
        z = floor(x);
        return z;
     }; 
     double argsin(double x){
        z = asin(x);
        return z;
     }; 
     double argcos(double x){
        z = acos(x);
        return z;
     };
     double argtan(double x){
        z = atan(x);
        return z;
     };
     double argtan2(double x,double y){
        z = atan2(x,y);
        return z;
     };
     double ceiling(double x){
        z = ceil(x);
        return z;
     };
     double cosineh(double x){
        z = cosh(x);
        return z;
     };
     double sineh(double x){
        z = sinh(x);
        return z;
     };
     double tangenth(double x){
        z = tanh(x);
        return z;
     };
     double loga(double x){
        z = log(x);
        return z;
     };
     
};
int main(){
    double a,b;
    cout<<"Enter the two numbers on which operations are to be performed"<<endl;
    cin>>a>>b;
    Math obj;
    cout<<obj.add(a,b)<<endl;
    cout<<obj.sub(a,b)<<endl;
    cout<<obj.multiply(a,b)<<endl;
    cout<<obj.divide(a,b)<<endl;
    cout<<obj.sine(a)<<endl;
    cout<<obj.cosine(a)<<endl;
    cout<<obj.tangent(a)<<endl;
    cout<<obj.sine(b)<<endl;
    cout<<obj.cosine(b)<<endl;
    cout<<obj.tangent(b)<<endl;
    cout<<obj.squareroot(a)<<endl;
    cout<<obj.squareroot(b)<<endl;
    cout<<obj.absolute(a)<<endl;
    cout<<obj.absolute(b)<<endl;
    cout<<obj.power(a,b)<<endl;
    cout<<obj.hypotenuse(a,b)<<endl;
    cout<<obj.floor1(a)<<endl;
    cout<<obj.floor1(b)<<endl;
    cout<<obj.argsin(a)<<endl;
    cout<<obj.argcos(a)<<endl;
    cout<<obj.argtan(a)<<endl;
    cout<<obj.argsin(b)<<endl;
    cout<<obj.argcos(b)<<endl;
    cout<<obj.argtan(b)<<endl;
    cout<<obj.argtan2(a,b)<<endl;
    cout<<obj.ceiling(a)<<endl;
    cout<<obj.ceiling(b)<<endl;
    cout<<obj.sineh(a)<<endl;
    cout<<obj.cosineh(a)<<endl;
    cout<<obj.tangenth(a)<<endl;
    cout<<obj.loga(a)<<endl;
    cout<<obj.sineh(b)<<endl;
    cout<<obj.cosineh(b);
    cout<<obj.tangenth(b)<<endl;
    cout<<obj.loga(b)<<endl;
    
    return 0;

}