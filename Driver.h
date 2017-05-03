#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Shift.h"


using namespace std;

class Driver{
 private:
  unsigned int id;
  string name;
  unsigned int maxHours;        // maximum duration of a shift
  unsigned int maxWeekWorkingTime;  // maximum number of hours of work in a week
  unsigned int minRestTime;     // minimum number of rest hours between shifts
  vector<Shift> shifts;         // assigned shifts
 public:
	 Driver();
  Driver(int id, string name, int maxHours, int maxWeekWorkingTime, int minRestTime);
  //set
  void setId(int);
  void setName(string);
  void setMaxHours(int);
  void setMaxWeekWorkingTime(int);
  void setMinRestTime(int);
  //void setShifts();

  // get methods
  unsigned int getId() const;
  string getName() const;
  unsigned int getShiftMaxDuration() const;
  unsigned int getMaxWeekWorkingTime() const;
  unsigned int getMinRestTime() const;
  vector<Shift> getShifts() const;
  

  // outher methods

};
