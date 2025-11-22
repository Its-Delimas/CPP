#include <iostream>

using namespace std;

int main(){
    string name;
    int age,height;
    char isStudent;

    cout<<"Enter Your name "<<endl;
    getline(cin,name);
    cout<<"Enter your age :"<<endl;
    cin>> age;
    cout<<"Enter your height in cm :"<<endl;
    cin>>height;
    cout<<"are you a student :"<<endl;
    cout<<"1. yes \n 2. No"<<endl;
    cin>> isStudent;

    if(isStudent=='1'){
        cout<<"student status confirmed <3"<<endl;
    }else if (isStudent=='2') {
        cout<<"confirmed not  student ;)"<<endl;
    }else {
        cout<<"Invalide choice...."<<endl;
    }

    return 0;
}