#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "Introduce dos números: ";
    cin >> a >> b;
    int modulo = a % b;
    cout << a << " módulo " << b << " es: " << modulo << endl;
}