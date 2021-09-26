#include "iostream"
using namespace std;
int calc(int, int);

int main() {
    int Max=0;
    int Min=0;
    cout<<"CALCULO DE MCM"<<endl;

    cout<<"Ingrese el Maximo "<<endl;
    cin>>Max;

    cout<<"Ingrese el Minimo "<<endl;
    cin>>Min;

    calc(Max, Min);

    cout<<"El MCD es: "<<calc(Max, Min)<<endl;


    return 0;
}



int calc(int Max, int Min) {

    if(Min == 0) return Max;

    return calc(Min, Max%Min);
}