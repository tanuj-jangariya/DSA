#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin>>n;

    // cout<<"The value of n is : "<<n<<endl;

    // int a, b;
    // cout << "Enter the value of a is : " << a << endl;
    // cin >> a;

    // cout << "Enter the value of b is : " << b << endl;
    // cin >> b;

    // if (a > b)
    // {
    //     cout << "The value of a is greater than b : " << a << endl;
    // }
    // else
    // {
    //     cout << "The value of b is greater than a : " << b << endl;
    // }


    // loops

    // int a;
    // cout<<"Enter the value of a is : "<< a<< endl;
    // cin>>a;

    // int i = 1;

    // while(i<=a){
    //     cout<< i << " ";
    //     i = i+1;
    // }

    int n;
    cin>>n;

    int i = 2;

    while(i<n){
        if(i%2==0){
            cout<<"Not Prime"<< i << endl;
        }
        else{
            cout<<"Prime"<< i << endl;
        }

        i = i + 1;
    }
}