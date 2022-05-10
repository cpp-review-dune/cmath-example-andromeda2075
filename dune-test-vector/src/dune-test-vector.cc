#include <iostream>
#include <dune/common/arraylist.hh>

int main(){
  Dune::ArrayList<double, 10> myList;

  for(int i=0;i<100;i++)
    myList.push_back(i);

  for(auto &e:myList)
    std::cout<<e<<" ";
 
  return 0;
}