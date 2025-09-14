#include<iostream>
using namespace std; 

int main(){

    int i = 5;
    int* p = &i;
    int ** p2 = &p;

    cout<< endl << endl << "sab sahi ho rha hai" <<endl << endl;

    cout<<"printing p"<<p<<endl;
    cout<<"address p"<<&p<<endl;
    cout<<"printing p   "<<*p<<endl;
}