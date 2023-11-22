#include <vector>
using std::vector;

void sort(vector<int>&reference){
  for(int i=0; i<reference.size(); i++){
    for(int j=0; j<(reference.size()-1); j++){
      if(reference[j]>reference[j+1]){
        int tmp=reference[j];
        reference[j]=reference[j+1];
        reference[j+1]=tmp;
      }
    }
  }
}
