#include <iostream>
using namespace std;

int main() {
    float alas, tinggi, luas;
    //rumus segitiga L=0,5 x a x t
    cout <<"Masukan alas segitiga:";
    cin>>alas;
    cout <<"Masukan tinggi segitiga:";
    cin>>tinggi;

    luas = 0.5 * alas * tinggi;
    cout <<"Luas segitiga adalah:" << luas <<"cm" <<endl;
    return 0;
}