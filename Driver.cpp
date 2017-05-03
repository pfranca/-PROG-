#include "Driver.h"


Driver::Driver() {

}

Driver::Driver(int id, string name, int maxHours, int maxWeekWorkingTime, int minRestTime) {

	this->id = id;
	this->name = name;
	this->maxHours = maxHours;
	this->maxWeekWorkingTime = maxWeekWorkingTime;
	this->minRestTime = minRestTime;
  
}

void Driver::setId(int id) {
	this->id = id;
}
void Driver::setName(string name) {
	this->name = name;
}
void Driver::setMaxHours(int maxHours) {
	this->maxHours = maxHours;
}
void Driver::setMaxWeekWorkingTime(int maxWeekWorkingTime) {
	this->maxWeekWorkingTime = maxWeekWorkingTime;
}
void Driver::setMinRestTime(int minRestTime) {
	this->minRestTime = minRestTime;
}


//////////////
// get methods
//////////////

unsigned int Driver::getId() const{
  return id;
}

string Driver::getName() const{
  return name;
}

unsigned int Driver::getShiftMaxDuration() const{
  return maxHours;
}

unsigned int Driver::getMaxWeekWorkingTime() const{
  return maxWeekWorkingTime;
}

unsigned int Driver::getMinRestTime() const{
  return minRestTime;
}

vector<Shift> Driver::getShifts() const{
  return shifts;
}
