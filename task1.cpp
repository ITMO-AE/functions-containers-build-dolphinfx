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
   int c=0,a=0;
    cout << "Введите число" << endl;
    cin>>c;
    if(c<=10){
    cout<<Factorial(c)<<endl;}
    else cout<<"Ничего не получится"<<endl;
    return 0;
}
