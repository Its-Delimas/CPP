#include <iostream>
#include <unordered map>
#include <string>
using namespace std;

int main (){
    unordered_map <int,string> students;
        students[1]="Spencer";
        students[2]="Patrick";
        students[3]="Reuben";
        students[4]="Kingston";
}
int option (
    char option;
    do{
        cout<<"1: display of students "<<endl;
        cout<<"2: Search students using ID "<<endl;
        cout<<"3: deslete a student "<<endl;
        cout<<"4: Exit"<<endl;
        cin>>option;
    }
    if (option==1){
        for(const auto& p:students){
            cout<<"ID: "<<p.first<<", Name: "<<p.second<<endl;
        }
    }else if(option==2){
        int reg_number;
        cout<<"Enter the registration number \n"<<endl;
        cin>>reg_number;
    }
)