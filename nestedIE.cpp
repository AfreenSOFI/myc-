#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the three no.s";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
             cout<<"a is greater ist";
        }
        else{
            cout<<"c is greater 2nd";
        }
    }
    else if(b>c){
        cout<<"b is greater 3rd";
    }
    else{
        cout<<"c is greater 4th";
    }
       
    return 0;
}