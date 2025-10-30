#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
          int EmpId;
          string Name;
          int PerformanceScore;
public:
          Employee(int id, string n, int ps)
          {
            this->EmpId=id;
            this->Name=n;
            this->PerformanceScore=ps;
            cout<<"Parameterised ctor of Employee called and intialized... "<<endl;
          }
          void DisplayInfo()const
          {
            cout<<"EMPLOYEE ID :- "<<this->EmpId<<endl;
            cout<<"NAME :- "<<this->Name<<endl;
            cout<<"PERFORMANCE SCORE :- "<<this->PerformanceScore<<endl;
          }
          ~Employee()
          {
            cout<<"Employee dtor called... "<<endl;
          }
};
class PermanentEmployee : public Employee
{
protected:
          int allowance;
public:
          PermanentEmployee(int id, string n, int ps,int _allowance): Employee(id,n,ps)
          {
            this->allowance = _allowance;
            cout<<"Parameterised ctor of Permanent Employee called and intialized... "<<endl;
          }
          inline int CalculateBonus()
          {
            int x = PerformanceScore*100 + allowance ;
            return x;
          }
          void DisplayInfo()const
          {
            cout<<"EMPLOYEE ID :- "<<this->EmpId<<endl;
            cout<<"NAME :- "<<this->Name<<endl;
            cout<<"PERFORMANCE SCORE :- "<<this->PerformanceScore<<endl;
            cout<<"ALLOWANCE :- "<<this->allowance<<endl;
          }
          ~PermanentEmployee()
          {
            cout<<"Permanent Employee dtor called... "<<endl;
          }
};
class ContractEmployee : public Employee
{
protected:
          int ContractDuration;
public:
          ContractEmployee(int id, string n, int ps,int time): Employee(id,n,ps)
          {
            this->ContractDuration=time;
            cout<<"Parameterised ctor of Contract Employee called and intialized... "<<endl;
          }
          inline int CalculateBonus()
          {
            int x = PerformanceScore*100;
            return x;
          }
          void DisplayInfo()const
          {
            cout<<"EMPLOYEE ID :- "<<this->EmpId<<endl;
            cout<<"NAME :- "<<this->Name<<endl;
            cout<<"PERFORMANCE SCORE :- "<<this->PerformanceScore<<endl;
            cout<<"Contract Duration :- "<<this->ContractDuration<<endl;
          }
          ~ContractEmployee()
          {
            cout<<"Contract Employee dtor called... "<<endl;
          }
};
int main(){
    
    return 0;
}