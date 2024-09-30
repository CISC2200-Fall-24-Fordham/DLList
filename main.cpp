#include <iostream>
#include "DLList.hpp"
using namespace std;

int main() {
  DLList aList;
  aList.addFirst(10);
  aList.addFirst(15);
  cout << aList.getFirst() << endl;
  cout << aList.getLast() << endl;
  return 0;
}
