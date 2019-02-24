#include <iostream>


using namespace std;
int Factorial(int x){
    int b=1;
    if (x<0) return b;

    for (int i=2;i<=x;i++){
        b*=i;

    }

     return b;
}

int main(int argc, char *argv[])
{
   int chislo=0;
    cout << "Введите число" << endl;
    cin>>chislo;
    if(chislo<=10){
    cout<<Factorial(chislo)<<endl;}
    else cout<<"Ничего не получится"<<endl;
    return 0;
}
