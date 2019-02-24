#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void Reverse(vector <int>&v){
   
    reverse(v.begin(),v.end());

}


int main(int argc, char *argv[])
{
    vector <int> a={1,2,3,4,5,6};

    cout << "Вектор до поворота" << endl;

    for (int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    Reverse(a);
    cout << "Вектор после поворота" << endl;

    for (int i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}
