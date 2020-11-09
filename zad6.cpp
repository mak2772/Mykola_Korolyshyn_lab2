#include <iostream>
using namespace std;

void zam(int *a,int *b)
{

  *a = *a * *b;
  *b = *a / *b;
  *a = *a / *b;

}


int main()
{
    int a,b;

    cout<<"Wpisz a:";
    cin>>a;

    cout<<"Wpisz b:";
    cin>>b;

    zam(&a,&b);

    cout<<"a ="<<a<<endl;

    cout<<"b ="<<b<<endl;

    return 0;
}
