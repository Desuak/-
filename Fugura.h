//#ifndef FUGURA_H_INCLUDED #define FUGURA_H_INCLUDED #endif // FUGURA_H_INCLUDED
#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Figure {
public:
  virtual int void p();
  virtual int void s();
  print_info() {
    std::cout << "Figure P is " << p() << std::endl;
    std::cout << "Figure S is " << s() << std::endl;
  }
};
class N-kyt : public Figure {
public:
  int p() override { return n*(2*R)*(sin(180/n)); }

  double s() override { return (1/2) * (n*(2*R)*(sin(180/n)) / r); }

  int R,r,n;
};

class Treygol : public Figure {
public:
    Treygol (int a) : a{a} {}
    int p() override { return 3*a; }
    double s() override { return ((a*a)*(3^(1/2)))/4; }
    int a;
};
class Kvadrat : public Figure {
public:
  int p() override { return 4*a; }

  double s() override { return a*a; }

  int a;
};
class Romb : public Figure {
public:
  int p() override { return 4*a; }

  double s() override { return a*h; }

  int a,r,h;
};
class Pramoygolnik : public Figure {
public:
  int p() override { return 2*(a+t); }

  double s() override { return a*t; }

  int a,t;
};
