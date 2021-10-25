#pragma once
#include <cassert>
#include "functions.h"
using namespace std;
void test1(){
  char result = filstyle();
  assert(result=='c');
  cout<<"Passed";
}
void test2(){
 double result = sum(array,9);
}
void runtest()
{
    test1();
}