#pragma once

#include <iostream>
#include <vector>


using namespace std;

class Shift{
 private:
  unsigned int busLineId;
  unsigned int driverId;  
  unsigned int busOrderNumber; 
  unsigned int startTime; 
  unsigned int endTime;   

 public:
  Shift(unsigned int busLineId, unsigned int driverId, unsigned int busNumber, unsigned int startTime, unsigned int endTime);
  // get methdos
  unsigned int getBusLineId() const;
  unsigned int getDriverId() const;
  unsigned int getBusOrderNumber() const; // order of the bus within the bus line
  unsigned int getStartTime() const;
  unsigned int getEndTime() const;

  //  set methods
  void setBusLineId(unsigned int);
  void setDriverId(unsigned int);
  void setBusOrderNumber(unsigned int);
  void setStartTime(unsigned int);
  void setEndTime(unsigned int);

  // other methods
};
