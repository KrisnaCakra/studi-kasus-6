#include <iostream>
#include <fstream>
#include "input.h"
#include "proses.h"

int main(){
  Nilai run;
  run.input();
  cout<<endl;
  run.proses();
  cout<<endl;
  run.output();
  cout<<endl;
  return 0;
}
