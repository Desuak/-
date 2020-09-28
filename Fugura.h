#pragma once
#include <iostream>
#include <string>
#include <cmath>
class Figure {
public:
  virtual float  p()=0;
  virtual float  s()=0;
void print_info() {
    std::cout << "Figure P is " << p() << std::endl;
    std::cout << "Figure S is " << s() << std::endl;
  }
};
class Nkyt : public Figure {
private:
    int R,r,n;
public:
    Nkyt() : R{ 0}, r{0}, n{0} {}
    Nkyt(int R, int r, int n) : R{ R }, r{r}, n{n} {}
    float p() override { return n*(2*R)*(sin(180/n)); }
    float s() override { return (n*(2*R)*(sin(180/n))) / r; }
};
class Treygol : public Figure {
private:
    int a;
public:
    Treygol() : a{ 0 } {}
    Treygol(int a) : a{ a } {}
    float p() override { return 3*a; }
    float s() override { return ((a*a)*(3^(1/2)))/4; }
};
class Kvadrat : public Figure {
private:
    int a;
public:
    Kvadrat() : a{ 0 } {}
    Kvadrat(int a) : a{ a } {}
    float p() override { return 4*a; }
    float s() override { return a*a; }
};
class Romb : public Figure {
private:
    int a,r,h;
public:
    Romb():a{0},r{0},h{0}{}
    Romb(int a,int r,int h):a{a},r{r},h{h}{}
   float p() override { return 4*a; }
   float s() override { return a*h; }
};
class Pramoygolnik : public Figure {
private:
    int a,t;
public:
    Pramoygolnik():a{0},t{0}{}
    Pramoygolnik(int a,int t):a{a},t{t}{}
  float p() override { return 2*(a+t); }
  float s() override { return a*t; }
};
//#ifndef FUGURA_H_INCLUDED #define FUGURA_H_INCLUDED #endif // FUGURA_H_INCLUDED
//  Figure p()
