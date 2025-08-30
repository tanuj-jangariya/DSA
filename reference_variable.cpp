#include<iostream>
using namespace std;

int main(){

    int i = 5;

    int& j = i;

    i++;
    cout<<i<<endl;
    
    return 0;
}