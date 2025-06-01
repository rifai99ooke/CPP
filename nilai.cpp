#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Masukan Nilai Mahasiswa=";cin>>a;

    if (a>=85) {
        cout<<"A";
    }

    else if (a>=70) {
        cout<<"B";
    }

    else if (a>=55) {
        cout<<"C";
    }

    else if (a>=40) {
        cout<<"D";
    }

    else {
        cout<<"E";
    }
}