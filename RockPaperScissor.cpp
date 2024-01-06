#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1 for Rock\n "
          "2 for Paper\n"
          "3 for Scissor"<<endl;
    cin>>a;
    srand(time(NULL));
    int randnum=(rand()%3)+1;
    if(a==randnum){
        cout<<"Draw "<<endl;
    }
    else if(a==1 && randnum==3 || a==2 && randnum==1 || a==3 && randnum==2 ){
        cout<<"You Win!!!"<<endl;
    }
    else{
        cout<<"You Lost"<<endl;
    }

    if(randnum==1){
        cout<<"Computer Choice: Rock"<<endl;
    }
    else if(randnum==2){
        cout<<"Computer Choice: Paper"<<endl;
    }
    else if(randnum==3){
        cout<<"Computer Choice: Scissor"<<endl;
    }
}
