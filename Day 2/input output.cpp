#include<iostream>
using namespace std;

int main(){

    int length_of_name = 50;
    char name[length_of_name];
    cout<<"Enter your name: ";
    // cin>>name;
    cin.getline(name,length_of_name); //Read full with space
    cout<<"Hello "<<name;

return 0;
}