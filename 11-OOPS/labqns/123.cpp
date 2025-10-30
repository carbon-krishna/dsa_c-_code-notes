// Write a program in C++ to describe the advantage of friend function over member functions.
#include <iostream>
#include <string>
using namespace std;
class Shop2;
class Shop1
{
private:
      int Earnings;
      string Dealer;
      string Customer;
      int SP;
      int CP;
      double pi = 3.142;
public:
      Shop1(int e):Earnings(e){}
      int Staff_Salary;
      void set_Earnings(){
        cout<<"Enter Your Earnings : ";
        cin>>Earnings;
        cout<<endl;
      }
      void set_Customer_Name(){
        cout<<"Enter Your Customer Name : ";
        cin>>Customer;
        cout<<endl;
      }
      void set_Staff_Salary();
      void set_SP();
      void set_CP(){
        cout<<"Enter Your cost price : ";
        cin>>CP;
        cout<<endl;
      }
      friend void compare(Shop1 s1,Shop2 s2);
      friend class Shop2;
};
class Shop2
{
private:
      int Earnings;
      string Dealer;
      string Customer;
      int SP;
      int CP;
public:
      Shop2(int e) : Earnings(e){}
      int Staff_Salary;
      void set_Earnings(){
        cout<<"Enter Your Earnings : ";
        cin>>Earnings;
        cout<<endl;
      }
      void set_Customer_Name(){
        cout<<"Enter Your Customer Name : ";
        cin>>Customer;
        cout<<endl;
      }
      void set_Staff_Salary();
      void set_SP();
      void set_CP(){
        cout<<"Enter Your cost price : ";
        cin>>CP;
        cout<<endl;
      }
      double p(Shop1 &s){
        return s.pi;
      }
      friend void compare(Shop1 s1,Shop2 s2);
};
void Shop1 :: set_Staff_Salary(){
    cout<<"Enter The salary Of Ramu Kaka  : ";
    cin>>Staff_Salary;
    cout<<endl;
}
void Shop2:: set_Staff_Salary(){
    cout<<"Enter The salary Of jhamu Kaka  : ";
    cin>>Staff_Salary;
    cout<<endl;
}
void Shop1 :: set_SP(){
        cout<<"Enter Your sale price : ";
        cin>>SP;
        cout<<endl;
}
void Shop2 :: set_SP(){
        cout<<"Enter Your sale price : ";
        cin>>SP;
        cout<<endl;
    }
void compare(Shop1 s1,Shop2 s2)
{
    if (s1.Earnings > s2.Earnings) {
        cout << "Shop1 has more earnings than Shop2." << endl;
    } else if (s1.Earnings < s2.Earnings) {
        cout << "Shop2 has more earnings than Shop1." << endl;
    } else {
        cout << "Both shops have equal earnings." << endl;
    }
}
int main(){
    Shop1 krishna(1000);
    Shop2 kaustav(2000);
    compare(krishna,kaustav);
    return 0;
}