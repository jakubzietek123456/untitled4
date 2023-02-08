#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Podaj ilość kolejnych liczb naturalnych do wyświetlenia: ";
    cin>>n;
    int i=0; //inicjacja licznika

    while(i<n)
    {
        cout<<i<<" ";
        i++; //operacja na liczniku
    }

    cout<<endl;

    return 0;
}