#pragma once

#include <iostream>
#include <string>
#include <vector>



using namespace std;

class Line{
 private:
  unsigned int id;
  unsigned int freq;
  vector<string> busStopList;
  vector<int> timesList;
 public:
  Line();
 // Line();
  // metodos get
  unsigned int getId() const;
  unsigned int getFreq() const;
  vector<string> getBusStops() const;
  vector<int> getTimings() const;
  // set methods
  void setId(unsigned int);
  void setFreq(unsigned int);
  void setStop(string);
  void setTime(int);
  // other methods
  void clearStop();
  void clearTimes();

};
