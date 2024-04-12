#include "SayilarListesi.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include "Basamak.hpp"
#include "Dugum.hpp"
#include "Sayi.hpp"



using namespace std;

int main()
{
  ifstream dosya("Sayilar.txt");
  SayilarListesi sayilarListesi;


  if (dosya.is_open())
  {
    string satir;
    SayilarListesi sayilarListesi;

    while (getline(dosya, satir))
    {
      stringstream ss(satir);
      string parca;
      while (getline(ss, parca, ' '))
      {
        Sayi* siradakiSayi = new Sayi();
        for (char c : parca)
        {
          if (isdigit(c))
          {
            int basamakDegeri = c - '0';
            siradakiSayi->BasamakEkle(basamakDegeri);
          }
        }
        sayilarListesi.SonaEkle(siradakiSayi);
      }
    }

    dosya.close();

     Dugum* temp = sayilarListesi.head;
  while (temp != NULL)
  {
    Sayi* sayi = temp->liste;
    cout << "Sayi: " << sayi->DegeriYazdir() << " Adres: " << sayi << " Basamak Adresleri: ";
  
    Basamak* basamak = sayi->head;
    while (basamak != NULL)
    {
      stringstream ss;
      ss << &basamak->veri;
      string adres = ss.str();
      string sonUcBasamak = adres.substr(adres.length() - 3);
      cout << "Basamak-" << basamak->veri << ": " << sonUcBasamak << " ";
      basamak = basamak->next;
    }
    cout << endl;
    
    temp = temp->next;
  }


  return 0;
}
}
