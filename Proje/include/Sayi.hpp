#ifndef SAYI_HPP
#define SAYI_HPP
#include <string>
#include "Basamak.hpp"

using namespace std;

class Sayi
{
public:
  Basamak* head;
  Sayi();
  void BasamakEkle(int veri);
  int ilkGetir();
  bool BosMu();
  std::string DegeriYazdir();
  void reverseDigits();
};

#endif // SAYI_HPP
