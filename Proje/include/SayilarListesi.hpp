#pragma once
#include "Dugum.hpp"
using namespace std;

class SayilarListesi
{
public:
  Dugum* head;
  SayilarListesi();
  ~SayilarListesi();
  void SonaEkle(Sayi* veri);
  Sayi* ilkGetir();
  void EnBuyuguCikart();
};
