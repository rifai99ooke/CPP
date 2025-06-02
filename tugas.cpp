#include <iostream>
using namespace std;

int main() {
    float jari_jari, volume, luas_permukaan ;
    // rumus Luas permukaan bola Lp = 4 x π x r²
    // rumus Volume bola V= 4/3 x π x r³
    // π = 22/7 atau 3,14
    
    cout << "Masukkan jari-jari bola :" ;
    cin >> jari_jari ;
    
    luas_permukaan= 4 * 3.14 * jari_jari * jari_jari ;
    volume = (4.0/3.0) * 3.14 * jari_jari * jari_jari * jari_jari ;
    
    cout << "Luas permukaan bola adalah adalah :" << luas_permukaan << "cm²" << endl;
    cout << "Volume bola adalah :" << volume << "cm³" <<endl;
    return 0;
}

