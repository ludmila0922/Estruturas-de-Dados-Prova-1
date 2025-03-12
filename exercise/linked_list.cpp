#include "../include/linked_list.hpp"

int main(int argc, char const* argv[]) {
  LinkedList<int>list;
  std::cout << "Removendo primeiro elemento ";
  list.pop_front();
  std::cout << "Inserindo o elemento";
        list.insert(5, 10);
        std::cout << "Inserindo o elemento";
        list.insert(10, 20);
  return 0;
}
