#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
        string name;
        int rollNo;
public:
        static int count;
        Student(string _name,int _rollNo){
            this->name = _name;
            this->rollNo = _rollNo;
            count++;
        }
        inline void showDetails(){
            cout<<"Student Name : "<<this->name<<endl;
            cout<<"Student Roll No : "<<this->rollNo<<endl;
        }
        static int getCount();
};
int Student::count=0;
int Student::getCount(){
    return count;
}
int main(){
    Student s1("krishna1",15);
    Student s2("krishna2",25);
    Student s3("krishna3",35);
    s1.showDetails();
    s2.showDetails();
    s3.showDetails();
    int x = Student::getCount();
    cout<<x;
    return 0;
}