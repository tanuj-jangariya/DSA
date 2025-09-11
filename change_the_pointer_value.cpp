#include<iostream>
using namespace std;

// METHOD FIRST TO CHANGE THE POINTER VALUE

// int main(){

//     int first = 8;
//     int second = 18;
//     int * ptr = &second;

//    *ptr = 9;

//     cout<<first<<" "<<second<<endl;

//     return 0;
// }



// SECOND METHOD TO CHANGE THE POINTER VALUE

int main(){

    int first = 6;
    int *p = &first;

    int *q = p;
    (*q)++;

    cout<<first<<endl;

    return 0;
}