#include <iostream>
using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    cout<<"Wpisz a:";
    cin>>a;

    cout<<"Wpisz b:";
    cin>>b;


    Swap(&a, &b);

    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
