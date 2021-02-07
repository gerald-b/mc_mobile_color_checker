
#ifndef C_VAL_PREP_HPP
#define C_VAL_PREP_HPP

#include <Arduino.h>

class CValPrep
{
private:
  int _rval;
  int _gval;
  int _bval;
public:
  CValPrep();
  CValPrep(int red, int green, int blue);

  void setRVal(int value);
  void setGVal(int value);
  void setBVal(int value);

  int getRVal(void);
  int getGVal(void);
  int getBVal(void);

  String getDisplayLineDEC(bool uppercase = true);
  String getDisplayLineHEX(bool uppercase = true, bool leadingHashSymbol = true);
};
#endif // C_VAL_PREP_HPP
