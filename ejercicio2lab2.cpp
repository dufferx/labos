#include <iostream>

using namespace std;

void contarRec(int, int);

int main(void)
{
    int n;

    cout << endl;

    cout << "Digite un numero para el conteo ";
    cin >> n;

    contarRec(1, n);

    return 0;
}

void contarRec(int i, int n)
{
    if(i < n){
        cout << i << endl;
        i = i + 1;
        
    }
    else if(n >= 1){
        cout << n << endl;
        n = n - 1;
    }
    contarRec(i, n);
}