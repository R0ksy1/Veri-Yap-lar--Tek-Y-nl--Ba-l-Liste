#include "Sayi.hpp"
#include <stdexcept>
using namespace std;

Sayi::Sayi()
{
  head = NULL;
}

void Sayi::BasamakEkle(int veri)
{
  if (head == NULL)
  {
    head = new Basamak(veri);
  }
  else
  {
    Basamak* temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = new Basamak(veri);
  }
}

int Sayi::ilkGetir()
{
  if (head == NULL)
    throw std::out_of_range("Error");
  return head->veri;
}

bool Sayi::BosMu()
{
  return head == NULL;
}

void Sayi::reverseDigits()
{
  Basamak* prev = NULL;
  Basamak* current = head;
  Basamak* next = NULL;
  while (current != NULL)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}

std::string Sayi::DegeriYazdir()
{
  std::string sonuc = "";
  Basamak* temp = head;
  while (temp != NULL)
  {
    sonuc += std::to_string(temp->veri);
    temp = temp->next;
  }
  return sonuc;
}
