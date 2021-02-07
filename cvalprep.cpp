#include "cvalprep.hpp"

CValPrep::CValPrep()
{
  this->setRVal(0);
  this->setGVal(0);
  this->setBVal(0);
}

CValPrep::CValPrep(int red, int green, int blue)
{
  this->setRVal(red);
  this->setGVal(green);
  this->setBVal(blue);
}

void CValPrep::setRVal(int value)
{
  if (value < 0) { value = 0; }
  if (value > 255) { value = 255; }
  this->_rval = value;
}

void CValPrep::setGVal(int value)
{
  if (value < 0) { value = 0; }
  if (value > 255) { value = 255; }
  this->_gval = value;
}

void CValPrep::setBVal(int value)
{
  if (value < 0) { value = 0; }
  if (value > 255) { value = 255; }
  this->_bval = value;
}

int CValPrep::getRVal(void)
{
  return this->_rval;
}

int CValPrep::getGVal(void)
{
  return this->_gval;
}

int CValPrep::getBVal(void)
{
  return this->_bval;
}

String CValPrep::getDisplayLineDEC(bool uppercase = true)
{
  String ret = "";
  
  ret.concat("r");
  ret.concat(String(this->getRVal(), DEC));
  ret.concat(" g");
  ret.concat(String(this->getGVal(), DEC));
  ret.concat(" b");
  ret.concat(String(this->getBVal(), DEC));
  if (uppercase)
  {
    ret.toUpperCase();
  }
  
  return ret;
}

