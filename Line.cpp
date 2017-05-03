#include "Line.h"


Line::Line(){

}

void Line::setId(unsigned int id) {
	this->id = id;
}

void Line::setFreq(unsigned int freq) {
	this->freq = freq;
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

unsigned int Line::getFreq() const {
	return freq;
}

vector<string> Line::getBusStops() const{
  return busStopList;
}

vector<int> Line::getTimings() const{
  return timesList;
}

void Line::clearStop() {
	busStopList.resize(0);
}

void Line::clearTimes() {
	timesList.resize(0);
}