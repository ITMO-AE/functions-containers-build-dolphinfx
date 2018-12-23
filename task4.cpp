#include <iostream>
#include <vector>

using namespace std;

vector <int>slo(vector <int>&x,vector <int>y){
    int a=0;
    a=x.size()+y.size();
    vector <int> out;

    for (int i=0;i<x.size();i++){
        out.push_back(x.at(i));

        }
    x.clear();
    for (int i=0;i<y.size();i++){
        out.push_back(y.at(i));
        }
    return out;
}

int main(int argc, char *argv[])
{
    vector <int> a={1,2,3,8,7,6};
    vector <int> b={1,4,5,7,1,2};
    vector <int> c;
    int q=0,w=0;
    cout << "Первый вектор" << endl;
    q=a.size();
    for (int i=0;i<q;i++){
        cout <<a.at(i)<<" ";
    }
    cout<<endl<<"Второй вектор"<<endl;
    q=b.size();
    for (int i=0;i<q;i++){
        cout <<b.at(i)<<" ";
    }
    cout<<endl;
    cout<<endl<<"Суммарный вектор"<<endl;
    c=slo(a,b);
    for (int i=0;i<c.size();i++){
        cout <<c.at(i)<<" ";
    }
    cout<<endl;
    if (a.empty()) cout<<"Первый вектор пустой"<<endl;
/*    for (int i=0;i<q;i++){
        cout <<a.at(i)<<" ";
    }*/
    return 0;
}
