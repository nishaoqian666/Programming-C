#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double t, v, v1, S;

    cout << "Please input t,v,v1 = ";/*Введите время движения t,
    скорость v в стоячей воде, скорость течения реки v1*/
    while (!(cin >> t) || !(cin >> v) || !(cin >> v1)) { //Проверить правильность ввода
        cout << "error\n";
        cin.clear();
        while (cin.get() != '\n') {
            continue;
        }
    }
    cin.get();
    S = t * (v - v1);//Вычислить путь, пройденный лодкой по течению
    cout << "S = " << S << endl;
    return 0;
}
