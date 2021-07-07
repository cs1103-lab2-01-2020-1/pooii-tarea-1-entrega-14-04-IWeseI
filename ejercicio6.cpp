#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class utec_vector{

private:
int size;
vector <int> v;

public:
utec_vector(){
  size = 0;
  v = {};
}

utec_vector(){

}

void push_back(int n){
  size = size +1;
  v.push_back(n);
}

void pop_back(){
  v.pop_back();
}

void insert(int p, int n){
  v.insert(v.begin()+ p,n);
}

void erase(int p){
  v.erase(v.begin()+p);
}

friend utec_vector operator+(const utec_vector first, const utec_vector second){
  utec_vector x;
  for (int i = 0; i<first.v.size(); i++){
    x.push_back(first.v[i]);
  }
  for(int i = 0; i<second.v.size(); i++){
    x.push_back(second.v[i]);
  }
  return x;
}
};
