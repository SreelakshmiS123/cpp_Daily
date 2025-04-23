#include<iostream>
using namespace std;
int main(){
 int a=50;
 int b= 5;

 if(a==b){
    cout<<"Equal";}
    else if(a>b){
     cout<<"a is greater than b";
    }
    else if(a<b){
        cout<<"a is less than b";
    }
    else if(a<=b){
        cout<<"a is less than or equal to b";
    }
    else if (a>=b){
        cout<<"a is greater than or less than b";
    }
    else if(a!=b){
        cout<<"a and b are not equal";
    }
    else{
        cout<<"Invalid input";
    }

    return 0;
 }
