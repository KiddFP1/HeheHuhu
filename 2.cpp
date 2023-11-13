#include<iostream>
#include <math.h>

using namespace std;

int main (){
    int n,t;
    int
    cin>>t>>n;
    if(t<1||t>12||n<<1){
        cout>>"INVALID";
    }
    else{
        if(t==1||t==3||t==5||t==7||t==8||t==10||t==12) cout<<"31";
        else if(t==4||t==6||t==9||t==11) cout<<"30";
        else if(t==2&&n%4==0) cout<<"29";
        else if(t==2&&n%4!=0) cout<<"28";
    } 
    return 0 ;
}