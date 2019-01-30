#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string x){
    int count=0;
    string k="";
    for (int i=x.size()-1;i>=0;i--){

        k+=x[i];
    }
    for (int i=0;i<x.size();i++){
        if (k[i]==x[i]) count++;
    }

    if (count==x.size()) return true;
    else return false;
}

int main(int argc, char *argv[])
{
    string stroka;
    cout << "Введите фразу" << endl;
    cin>>stroka;
    if (IsPalindrom(stroka)) cout<<"OK"<<endl;
    else cout<<"Not";
    return 0;
}
