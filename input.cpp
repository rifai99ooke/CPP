#include <iostream>
using namespace std;

int main () {
    int a, b;
    cout<<"input variabel a = ";cin>>a;
    cout<<"input variabel b = ";cin>>b;

    if (a>b) {
        cout<<"variabel a lebih besar dari b";
    }

    else if (a<b) {
        cout<<"variabel a lebih kecil dari variabel b";
    }

    else {
        cout<<"nilai variabel a sama dengan variabel b"<<endl;
    }

    return 0;
}