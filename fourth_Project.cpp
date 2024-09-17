//
// Created by Otabek Goziyev on 17/09/24.
//
#include <iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    if (year%400==0||(year%100!=0&&year%4==0)){
        cout<<year<<"is leap\n";
    }else{
        cout <<year<<" ISNOT leap\n";
    }
}