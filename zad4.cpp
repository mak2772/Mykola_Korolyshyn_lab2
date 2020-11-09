#include <iostream>
using namespace std;

void count(int *a, int *b, int *wyn)
{
  *wyn = *a+*b;


}

int main()
{
    int a, b;
    int wyn;
    cout<<"Wpisz a:";
    cin>>a;

    cout<<"Wpisz b:";
    cin>>b;


    wyn = a*b;
    cout<<"Wynik iloczyn:"<<wyn<<endl;

    count(&a,&b,&wyn);
    cout<<"Wynik sum:"<<wyn<<endl;






    return 0;
}
