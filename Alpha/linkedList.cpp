#include <iostream>
#include <string>
using namespace std;

struct Node{
    int marks;
    string name;
    Node* next;
    Node(int val,string s):marks(val),name(s),next(nullptr){}
};

int main(){
    Node* head= new Node(30,"spencer");
    head->next=new Node(40,"Moreene");
    head->next->next=new Node(50,"Teddybears");
    head->next->next->next=new Node(60,"Legend");
    
    Node* obj=head;
    while(obj!=nullptr){
        cout<<obj->marks<<" : "<<obj->name<<" , ";
        obj=obj->next;
    }
    return 0;
}