#ifndef __CORBA_PROXY__
#define __CORBA_PROXY__

#include <iostream>

class CorbaProxy {
public:
  CorbaProxy() {}
  void corba_call_1(unsigned int i) {
    std::cout << "corba_call_1 " << i << std::endl;
  }
  void corba_call_2() {
    std::cout << "corba_call_2" << std::endl;
  }
};

#endif // __CORBA_PROXY__
