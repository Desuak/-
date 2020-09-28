#include "Fugura.h"
#include "Tree.h"
#include <iostream>
#include <string>
#include <cmath>
void menu(){
    int  f;
    int p();
    int s();
    while (true) {
            f = -1;
            std::cout<< "\nEnter figure:\n"<<
                   "\t#0 - n-kyt\n"<<
                   "\t#1 - kvadrat;\n"<<
                   "\t#2 - treygol;\n"<<
                   "\t#3 - romb\n"<<
                   "\t#4 - pramokyt\n"<<
                   "#5 - back\n";
        while ((f < 0) || (f >5 )) {
            std::cout << "\n#";
            std::cin >> f;
        }
        switch (f){
        case 0: {
                int n,R,r;
                std::cout<<"Naberite n \n";
                std::cin >> n;
                std::cout<<"Naberite R \n";
                std::cin >> R;
                std::cout<<"Naberite r\n";
                std::cin>>r;
                Nkyt*figure= new Nkyt(n,R,r);
                figure->print_info();
                break;
            }
            case 1: {
                int a;
                std::cout<<"Naberite storony \n";
                std::cin>>a;
                Kvadrat*figure= new Kvadrat(a);
                figure->print_info();
                break;
                }
            case 2: {
                int a;
                std::cout<<"Naberite storony \n";
                std::cin>>a;
                Treygol*figure= new Treygol(a);
                figure->print_info();
                break;
            }
            case 3: {
                int a,h,r;
                std::cout<<"Naberite storony \n";
                std::cin>>a;
                std::cout<<"Naberite r \n";
                std::cin>>r;
                std::cout<<"Naberite h \n";
                std::cin>>h;
                Romb*figure= new Romb(a,h,r);
                figure->print_info();
                break;
                }
            case 4: {
                int a,t;
                std::cout<<"Naberite dliny";
                std::cin>>a;
                std::cout<<"Naberite shiriny";
                std::cin>>t;
                Pramoygolnik*figure= new Pramoygolnik(a,t);
                figure->print_info();
                break;
            }
            case 5: {
                return;
            }
            default:;
        }
    }
}
int main() {
    menu();
    return 0;
}
