#include "Fugura.h"
#include "Tree.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
         void menu()
         {
             int  f;
             while (true) {
        f = -1;
        std::cout
                << "\nEnter figure:\n"
                   "\t#0 - n-kyt\n"
                   "\t#1 - kvadrat;\n"
                   "\t#2 - treygol;\n"
                   "\t#3 - romb\n"
                   "\t#4 - pramokyt\n"
                   "#5 - back\n";
        while ((f < 0) || (f >5 )) {
            std::cout << "\n#";
            std::cin >> f;
        }
        case 0: {
                N-kyt*figure= new N-kyt();
                count<<"Naberite n \n"<<endl;
                cin>>n;
                cout<<"Naberite R \n"<<endl;
                cin>>R;
                cout<<"Naberite r\n"<<endl;
                cin>>r;
                break;
            }
            case 1: {
                Kvadrat*figure= new Kvadrat();
                cout<<"Naberite storony \n"<<endl;
                cin>>a;
                break;
                }
            case 2: {
                Treygol*figure= new Treygol();
                cout<<"Naberite storony \n"<<endl;
                cin>>a;
                break;
            }
            case 3: {
                Romb*figure= new Romb();
                cout<<"Naberite storony \n"<<endl;
                cin>>a;
                cout<<"Naberite r \n"<<endl;
                cin>>r;
                cout<<"Naberite h \n"<<endl;
                cin>>h;
                break;
                }
            case 4: {
                Pramoygolnik*figure= new Pramoygolnik();
                cout<<"Naberite dliny"<<endl;
                cin>>a;
                cout<<"Naberite shiriny"<<endl;
                cin>>t;
                break;
            }
            case 5: {
                return;
            }
            default:;
        }
    }
}
