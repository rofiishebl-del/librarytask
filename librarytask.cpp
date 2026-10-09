#include<iostream>
#include<string>
using namespace std;
class person{
    private:
    int id;
    string PersonName;
    public:
    person(int pid ,string pn):id(pid),PersonName(pn){}
    virtual void display()const{
        cout<<"Person Name : "<<PersonName<<"\n";
        cout<<"id : "<<id<<"\n";
    }

};

class Student : public person {
    private:
   string major;
    public:
    Student(int pid ,string pn,string m):person(pid,pn){
        major=m;
    }
    void display()const override{
        person::display();
        cout<<"student major : "<<major<<"\n";
    }
};
class Employee : public person{
    private:
    double salary;
    public:
    Employee(int pid ,string pn,double s):person(pid,pn){
          salary=s;
    }
     void display()const override{
        person::display();
        cout<<"sallery : "<<salary<<"\n";
    }

};
class EmployeeAndStudent : public Student ,public Employee{
    public:
    EmployeeAndStudent(int pid ,string pn,string m,double s):Student(pid,pn,m),Employee(pid,pn,s){}
    void display()const override{
        Student::display();
        Employee::display();

    }




};
int main(){
    EmployeeAndStudent es(120,"ola","cs",12009);
    es.display();
    
    
}