#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int EmpId;
    string Name;
    int PerformanceScore;

public:
    Employee(int id, string n, int ps) {
        this->EmpId = id;
        this->Name = n;
        this->PerformanceScore = ps;
        cout << "Parameterized ctor of Employee called and initialized...\n";
    }

    virtual void DisplayInfo() const {
        cout << "EMPLOYEE ID: " << EmpId << endl;
        cout << "NAME: " << Name << endl;
        cout << "PERFORMANCE SCORE: " << PerformanceScore << endl;
    }

    virtual ~Employee() {
        cout << "Employee dtor called...\n";
    }
};

class PermanentEmployee : public Employee {
protected:
    int allowance;

public:
    PermanentEmployee(int id, string n, int ps, int _allowance)
        : Employee(id, n, ps) {
        this->allowance = _allowance;
        cout << "Parameterized ctor of PermanentEmployee called and initialized...\n";
    }

    inline int CalculateBonus() {
        return PerformanceScore * 100 + allowance;
    }

    void DisplayInfo() const override {
        Employee::DisplayInfo();
        cout << "ALLOWANCE: " << allowance << endl;
        cout << "BONUS: " << CalculateBonus() << endl;
    }

    ~PermanentEmployee() {
        cout << "PermanentEmployee dtor called...\n";
    }
};

class ContractEmployee : public Employee {
protected:
    int ContractDuration;
    static int count; // static member

public:
    ContractEmployee(int id, string n, int ps, int time)
        : Employee(id, n, ps) {
        this->ContractDuration = time;
        count++;
        cout << "Parameterized ctor of ContractEmployee called and initialized...\n";
    }

    inline int CalculateBonus() {
        return PerformanceScore * 100;
    }

    void DisplayInfo() const override {
        Employee::DisplayInfo();
        cout << "CONTRACT DURATION: " << ContractDuration << endl;
        cout << "BONUS: " << CalculateBonus() << endl;
    }

    static int getCount() { return count; }

    ~ContractEmployee() {
        count--;
        cout << "ContractEmployee dtor called...\n";
    }
};

int ContractEmployee::count = 0; // static member initialization

int main() {
    // Fixed-size array of Employees
    Employee* employees[3]; 

    employees[0] = new PermanentEmployee(101, "Alice", 8, 5000);
    employees[1] = new ContractEmployee(102, "Bob", 7, 12);
    employees[2] = new ContractEmployee(103, "Charlie", 9, 24);

    cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < 3; i++) {
        employees[i]->DisplayInfo();
        cout << "-----------------------\n";
    }

    cout << "Total Contract Employees: " << ContractEmployee::getCount() << endl;

    // Cleanup
    for (int i = 0; i < 3; i++) {
        delete employees[i];
    }

    return 0;
}
