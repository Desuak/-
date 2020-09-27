#include "Der.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void menu(){
     int n,a,b,c,d,f;
     cout <<"Vvedite phigyry chto hotite naiti  n= n-ygolnik , a= Kvadrat , b= treygolnik , c= romb , d= pramokyt";
     cin >> f;
     if (f=n){
         int main()
         {
             int n,a,b,c,d;     //s- сторона правильных фигур , S- площадь , P- периметр h-высота r-радиус вписаного круга ,R -радиус описаного круга , t- ширина
             cout <<"Vvedite phigyry chto hotite naiti  n= n-ygolnik , a= Kvadrat , b= treygolnik , c= romb , d= pramokyt";
             cin >> f;
             if (f=n){//делаем функцию n-угольника
                    system("cls");
				    n-kyt();
				    system("pause");
				    break;
             }
             if (f=a) {//делвем функцию квадрата
                 system("cls");
                 kvad();
                 system("pause");
                 break;

             }
             if (f=b) {//делаем функцию треугольника
                 system("cls");
                 treyg();
                 system("pause")
                 break;
             }
             if (f=c) {//делаем функцию ромба
                 system("cls");
                 rom();
                 system("pause");
                 break;
             }
             if (f=d) {//делаем функцию прямоугольника
                 system("cls");
                 pramoyg();
                 system("pause");
                 break;
             }
             return 0;
             }
             }
             }
