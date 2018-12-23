#include <iostream>
#include <vector>
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



vector <string> PalindromFilter(vector <string>x,int y){

    int a=0,count;
    vector <string> out;
    a=x.size();
    for (int i=0;i<a;i++){
        if(!x.at(i).empty()){
        if (x.at(i).size()>=y&&IsPalindrom(x.at(i))){
            out.emplace_back(x.at(i));
        }
       // else cout<<"No"<<endl;

    }}
return out;

}


int main(int argc, char *argv[])
{
    int a=0,b=0,minLength=0;
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
    b=z.size();
    for (int i=0;i<b;i++){
        cout<<z.at(i)<<endl;
    }
    return 0;
}
