#include<bits/stdc++.h>
using namespace std;

void decimalToBinary(int n)
{
    while(n>0)
    {
        int last_bit = n&1;
        cout<<last_bit;
        n = n>>1;
    }

}


int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"\nThebinary representation of "<<n<<"is: \n" ;
    decimalToBinary(n);



    return 0;
}