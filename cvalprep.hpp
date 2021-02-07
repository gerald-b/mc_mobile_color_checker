
#ifndef C_VAL_PREP_HPP
#define C_VAL_PREP_HPP

class CValPrep
{
private:
  int _rval;
  int _gval;
  int _bval;
public:
  CValPrep();

  void setRVal(int value);
  void setGVal(int value);
  void setBVal(int value);

  int getRVal(void);
  int getGVal(void);
  int getBVal(void);
};
#endif // C_VAL_PREP_HPP
