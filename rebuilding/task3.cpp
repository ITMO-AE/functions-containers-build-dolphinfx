#include <iostream>
#include <vector>
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



vector <string> PalindromFilter(vector <string>x,int y){

   
    vector <string> out;
   
    for (int i=0;i<x.size();i++){
        if(!x.at(i).empty()){
        if (x.at(i).size()>=y&&IsPalindrom(x.at(i))){
            out.emplace_back(x.at(i));
        }
     
    }}
return out;

}


int main(int argc, char *argv[])
{
    int a=0,minLength=0;
    string s;
    vector <string> words(100);
    vector <string> z;

    cout << "Введите количество строк" << endl;
    cin>>a;
    cout << "Введите минимальную длину строки" << endl;
    cin>>minLength;

    for (int i=0;i<a;i++){
        cout << "Введите строку" << endl;
        cin>>s;
        while (s.size()>100) {
            cout<<"Слишком большая строка, введите заново"<<endl;
            s.clear();
            cin>>s;
        }
        words.at(i)=s;
        s.clear();

    }
    cout<<"Результат: "<<endl;
    z=PalindromFilter(words,minLength);
   
    for (int i=0;i<z.size();i++){
        cout<<z.at(i)<<endl;
    }
    return 0;
}
