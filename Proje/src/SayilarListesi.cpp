#include "SayilarListesi.hpp"
#include <iostream>
#include <stdexcept>
#include <fstream> 
#include <string> 
#include <sstream> 
using namespace std;
SayilarListesi::SayilarListesi()
{
  head = NULL;
}

SayilarListesi::~SayilarListesi()
{
  Dugum* current = head;
  Dugum* next;
  while (current != NULL)
  {
    next = current->next;
    delete current;
    current = next;
  }
}

void SayilarListesi::SonaEkle(Sayi* veri)
{
  Dugum* yeni = new Dugum(veri);
  if (head == NULL)
  {
    head = yeni;
  }
  else
  {
    Dugum* temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = yeni;
  }
}

Sayi* SayilarListesi::ilkGetir()
{
  if (head == NULL)
    throw std::out_of_range("Error");
  return head->liste;
}

void SayilarListesi::EnBuyuguCikart()
{
  if (head == NULL)
    throw std::out_of_range("Error");

  Dugum* current = head;
  Dugum* prev = NULL;
  Sayi* maxSayi = head->liste;
  Dugum* maxDugum = head;

  while (current != NULL)
  {
    if (current->liste->ilkGetir() > maxSayi->ilkGetir())
    {
      maxSayi = current->liste;
      maxDugum = current;
    }
    prev = current;
    current = current->next;
  }

  if (prev == NULL)
  {
    head = head->next;
  }
  else
  {
    prev->next = maxDugum->next;
  }

  delete maxDugum;
}
