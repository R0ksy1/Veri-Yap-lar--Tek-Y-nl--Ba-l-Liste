#pragma once
#include "Sayi.hpp"
using namespace std;

class Dugum
{
public:
  Sayi* liste;
  Dugum(Sayi* sayiListesi);
  ~Dugum();
  Sayi* listePtr;
  Dugum* next;
};
