#include <iostream>
#include <cmath>
using namespace std;

class Integer{
private:
  int value;
public:
  Integer(){
    value = 0;
  };

  Integer(int value1){
    value = value1;
  };

  Integer(const Integer& other){
    value = other.value;
  };

  void operator =(const Integer& other){
    value = other.value;
  };

  Integer operator +(int value1){
    int suma = (value + value1);
    return Integer(suma);
  };

  Integer operator -(int value1){
    int resta = (value - value1);
    return Integer(resta);
  };

  Integer operator *(int value1){
    int multiplicacion = value*value1;
    return Integer(multiplicacion);
  };

  Integer operator /(int value1){
    int division = value / value1;
    return Integer(division);
  };

  Integer operator ^(int value1){
    int potencia = 1;
    for (int i = 0; i<value1; i++){
      potencia = potencia*value;
    }
    return Integer(potencia);
  };

  bool operator >(int value1){
    if (value>value1){
      return true;
    }
    else
      return false;
  };

  bool operator >=(int value1){
    if (value>=value1){
      return true;
    }
    else
      return false;
  };

  bool operator <(int value1){
    if (value<value1){
      return true;
    }
    else
      return false;
  };

  bool operator <=(int value1){
    if (value<=value1){
      return true;
    }
    else
      return false;
  };

  bool operator !=(int value1){
    if (value!=value1){
      return true;
    }
    else
      return false;
  };

  bool operator ==(int value1){
    if (value==value1){
      return true;
    }
    else
      return false;
  };

  operator int(){
    return 0;
  };

  friend ostream& operator <<(ostream& os, const Integer& other){
    os<< other.value;
    return os;
  };

  friend istream& operator >>(istream& os, Integer& other){
    os>> other.value;
    return os;
  };


};
