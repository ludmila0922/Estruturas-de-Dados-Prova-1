#include "../include/doubly_linked_list.hpp"

int main() {
    DoublyLinkedList<int> list;
  
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);
  
    std::cout << "Removendo o primeiro elemento...\n";
    list.pop_front();
    std::cout << "Lista após remover o primeiro elemento:\n";
    list.print();
  
  
  
    auto _begin = list.begin();
    ++_begin;
    auto _end = _begin + 2;
  
    std::cout << "Removendo os elementos da segunda à quarta posição...\n";
    list.erase(_begin, _end);
  
  
  

  return 0;
  
  }

