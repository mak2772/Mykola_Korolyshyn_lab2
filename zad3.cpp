#include <iostream>
using namespace std;

void Swap(int &ref_a, int *b)
{
    int temp = ref_a;
    ref_a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout<<"Wpisz a:";
    cin>>a;
    cout<<"Wpisz b:";
    cin>>b;

    cout<<"Swap"<<endl;
    Swap(a, &b);

    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
