// ========================================================================
// Name : clocktype.cpp
// Author : Saranya Balakrishnan 
// G.I.D : 5
// Depart : Computer Engineering
// SJSU ID : 013786097 
// ========================================================================

1. Implement the class clock type described in the slides, use the same const modifier for all the methods FOR THE METHODS THAT HAVE THE CONST MODIFIER, the ones that don't DO NOT ADD it
 
  #include <iostream> using namespace std; 
 class clockType
{
  public:
  void setTime(int hours, int minutes, int seconds);
  void getTime(int& hours,int& minutes, int& seconds) const; void printTime() const;
  void incrementSeconds();
  void incrementMinutes();
  void incrementHours();
  bool equalTime(const clockType& otherClock) const; clockType(int hours, int minutes, int seconds); clockType();
  private:
         int hr;
         int sec;
         int min;
};
//Member function definitions
void clockType::setTime(int hours, int minutes, int seconds) {
    if (0 <= hours && hours < 24) hr = hours;
    else
    hr = 0;
     else 
}
if (0 <= minutes && minutes < 60) min = minutes;
else
    min = 0;
if (0 <= seconds && seconds < 60)
    sec = seconds; sec = 0;

void clockType::getTime(int& hours, int& minutes, int& seconds) const {
hours = hr;
 minutes = min; seconds = sec;

 }

void clockType::printTime() const
 {
if (hr < 10)
       cout << "0";
  cout << hr << ":";
if (min < 10)
  cout << "0"; cout << min << ":";
if (sec < 10)
       cout << "0";
cout << sec;
cout<<endl;
}
void clockType::incrementHours()
 {
hr++;
if (hr > 23) hr = 0;
}
void clockType::incrementMinutes() {
min++;
if (min > 59) {
min = 0;
incrementHours(); //increment hours }
}
void clockType::incrementSeconds() {
       sec++;
       if (sec > 59)
       {
sec = 0;
incrementMinutes(); //increment minutes }
}
bool clockType::equalTime(const clockType& otherClock) const {
 }
return (hr == otherClock.hr
&& min == otherClock.min
&& sec == otherClock.sec);
clockType::clockType() //default constructor {
 hr = 0; min = 0;

 }
sec = 0;
 clockType::clockType(int hours, int minutes, int seconds) {
if (0 <= hours && hours < 24) hr = hours;
else
hr = 0;
if (0 <= minutes && minutes < 60)
min = minutes;
else
min = 0;
if (0 <= seconds && seconds < 60)
 sec = seconds; sec = 0;
else
 }

 
  
   
   
 
 
