#include<iostream>
#include<Windows.h>
#include <unistd.h>



using namespace std;

void displaytime(int HH,int MM , int SS){
    system("cls");
   cout<<HH<<":"<<MM<<":"<<SS<<endl;
}
int main(){
   int HH=0,MM=0,SS=0;
   displaytime(HH,MM,SS);
   bool a = true;                                                                      

 while(a){
    sleep(1);
    SS++;
    if(SS>59){
        MM++;
        SS=0;
    }
    if(MM>59){
        HH++;
        MM=0;
    }
  displaytime(HH,MM,SS); 

 }
 
 return 0;
}