#include <iostream>
#include <string>

using namespace std;

class Student{
public:
    // attributes
    int id;
    string name;
    int nos;
private:
    string gf;
    float *gpa;
    int age;

public:
     void display();
     void setGpa(float a)
     {
        // layer of authentication
        *this->gpa = a;
     }

     float getGpa() const
     {
        return *this->gpa;
     }
     float getAge() const
     {
        return this->age;
     }
    // ctor : default ctor(constructor)
    Student(){
        cout<<"Student default ctor called"<<endl;
    }

    // ctor: parameterised ctor
    Student(int id, int age, string name,int nos,float gpa,string gf){
        cout<<"student parameterised ctor calld"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf;
    }

    // copy ctor
    Student(const Student &srcobj) //srcobj => A
    {
        cout<<"student copy ctor calld"<<endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    // Behaviour/Methods/Fxns
    void study(){
        cout<<this->name<<" studying"<<endl;
    }
    void sleep(){
        cout<<this->name<<" sleeping"<<endl;
    }
    void bunk(){
        cout<<this->name<<" bunking"<<endl;
    }

    // dtor : (destructor)
    ~Student()
    {
       cout<<this->name<<" Student default dtor called"<<endl;
       delete this->gpa;
    }

private:
       void gfchatting()
       {
        cout<<this->name<<"chatting with gf"<<endl; 
       }
};
// member fxn defined outside of the class
void Student::display()
{
    cout<<"id :- "<<this->id<<endl;
    cout<<"name :- "<<this->name<<endl;
}
int main(){

    // Student A;
    // A.id = 1;
    // A.age = 18;
    // A.name = "ranu";
    // A.nos = 6;

    // A.study();

    // Student B;
    // B.id = 2;
    // B.age = 17;
    // B.name = "rahul";
    // B.nos = 5;

    // B.bunk();
    // Student A(1,15,"ranu",6); // stack
    // Student B(2,16,"rahul",5);
    // Student C(3,17,"ronaldo",4);
    // Student D(4,18,"reena",3);

    // cout<<A.name<<" "<<A.age<<endl;
    // A.bunk();
    // B.sleep();

    // copy ctor
    // Student C = A; // another way--> Student C(A);
    // cout<<A.name<<" "<<C.name<<endl;

    // Dynamic allocation , or student pointer
    // Student *A = new Student(1,14,"babbar",7,9.8); // heap
    // cout<<A->name<<endl;
    // cout<<A->age<<endl;
    // A->study(); // dynamic mein u need to call destructor
    // delete A; // destructor called
    // Student A(1,12,"ranu",5,7.8,"neenu");
    // cout<<A.gf();
    // cout<<A.getGpa()<<endl;
    // A.setGpa(6.7);
    // cout<<A.getGpa()<<endl;
    // cout<<A.getAge()<<endl;

    Student K;
    K.id=13;
    K.name="krishna";
    K.display();
    Student *kc = new Student[10];
    
    return 0;
}