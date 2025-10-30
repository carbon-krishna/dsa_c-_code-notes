#include <iostream>
using namespace std;
class Time
{
protected:
        int hours;
        int minutes;
public:
        Time(int _hr,int _min){
            this->hours=_hr;
            this->minutes=_min;
            cout<<"Time of the Day is "<<this->hours<<" Hours & "<<this->minutes<<" Minutes"<<endl;
        }
        friend bool operator==(const Time& t1, const Time& t2);
        friend bool operator!=(const Time& t1, const Time& t2);
};
bool operator==(const Time& t1, const Time& t2){
    return (t1.hours==t2.hours && t2.minutes==t2.minutes);
}
bool operator!=(const Time& t1, const Time& t2){
    return (t1.hours!=t2.hours || t2.minutes!=t2.minutes);
}
int main(){
    Time t1(1,2);
    Time t2(2,3);
    cout<<(t1==t2);
    cout<<endl;
    cout<<(t1!=t2);
    return 0;
}