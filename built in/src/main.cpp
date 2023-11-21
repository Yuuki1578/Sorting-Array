#include <iostream>
#include "../lib/function.h"

int main(){

  int _array[]={5,8,0,1,9,7,3,2,4,6};
  int len=sizeof(_array)/sizeof(*_array);

  for(int iterasi : _array){
    std::cout<<iterasi<<" ";
  } std::cout<<"\n\n";

  _ARRAY(_array,len);

  for(int iterasi : _array){
    std::cout<<iterasi<<" ";
  } std::cout<<"\n";
  return 0;
}
