#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Masukan Baris=";cin>>a;

    for (int b=1; b<=a; b++){
        for (int c=1; c<=b; c++) {
            cout<<c<<"";
        }
        cout<<endl;
    }
}