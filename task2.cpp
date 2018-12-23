#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string x){
    int a=0,count=0;
    string k="";
    a=x.size();
    for (int i=a-1;i>=0;i--){

        k+=x[i];
    }
    for (int i=0;i<a;i++){
        if (k[i]==x[i]) count++;
           }

    if (count==x.size()) return true;
    else return false;
}

int main(int argc, char *argv[])
{
    string s;
    cout << "Введите фразу" << endl;
    cin>>s;
    if (IsPalindrom(s)) cout<<"OK"<<endl;
    else cout<<"Not";
    return 0;
}
