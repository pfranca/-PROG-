#include "Line.h"


Line::Line(){

}

void Line::setId(unsigned int id) {
	this->id = id;
}

void Line::setStop(string stop) {
	busStopList.push_back(stop);
}

void Line::setTime(int time) {
	timesList.push_back(time);
}


////////////////
// get methods
////////////////

unsigned int Line::getId() const{
  return id;
}

vector<string> Line::getBusStops() const{
  return busStopList;
}

vector<int> Line::getTimings() const{
  return timesList;
}
