#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
class Number{
private:
  T value;
public:
  Number(){
    value = 0;
  };

  Number(T value1){
    value = value1;
  };

  Number(const Number& other){
    value = other.value;
  };

  void operator =(const Number& other){
    value = other.value;
  };

  Number operator +(T value1){
    int suma = (value + value1);
    return Number(suma);
  };

  Number operator -(T value1){
    int resta = (value - value1);
    return Number(resta);
  };

  Number operator *(T value1){
    int multiplicacion = value*value1;
    return Number(multiplicacion);
  };

  Number operator /(T value1){
    int division = value / value1;
    return Number(division);
  };

  Number operator ^(T value1){
    int potencia = 1;
    for (int i = 0; i<value1; i++){
      potencia = potencia*value;
    }
    return Number(potencia);
  };

  bool operator >(T value1){
    if (value>value1){
      return true;
    }
    else
      return false;
  };

  bool operator >=(T value1){
    if (value>=value1){
      return true;
    }
    else
      return false;
  };

  bool operator <(T value1){
    if (value<value1){
      return true;
    }
    else
      return false;
  };

  bool operator <=(T value1){
    if (value<=value1){
      return true;
    }
    else
      return false;
  };

  bool operator !=(T value1){
    if (value!=value1){
      return true;
    }
    else
      return false;
  };

  bool operator ==(T value1){
    if (value==value1){
      return true;
    }
    else
      return false;
  };

  operator int(){
    return 0;
  };

  friend ostream& operator <<(ostream& os, const Number& other){
    os<< other.value;
    return os;
  };

  friend istream& operator >>(istream& os, Number& other){
    os>> other.value;
    return os;
  };


};
