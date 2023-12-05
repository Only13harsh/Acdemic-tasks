#include<iostream>
using namespace std;
class program
{
    int rollno;
    string name;
    float marks;
public:
    program(int r, string n , float f)
    {
        rollno = r;
        name = n;
        marks = f;
    }
    program()
    {
        rollno=50;
        name=" udit";
        marks = 78;
    }
    void display()
    {
        cout<<"the rollno is" <<rollno <<" the name is "<<name << "the marks are" <<marks <<endl;
    }
    program(program& p1)
    {
      rollno=p1.rollno;
      name=p1.name;
      marks=p1.marks;
    }
    ~program()
    {
        cout<<"destructor called and memory of obj is cleared" <<endl;
    }

};
int main()
{
    program p1(12,"anubhav",12.6);
    p1.display();
    program p2;
    p2.display();
    program p3(p1);
    p1.display();
    return 0;
    }
