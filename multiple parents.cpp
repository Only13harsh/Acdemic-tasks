//wap for multiple inheritance using constructors
#include <iostream>
using namespace std;
class Mother {
    string motherName;
  public:
    Mother(string name) {
        motherName = name;
    }
    void displayMotherName() {
        cout << "Mother's name is: " << motherName << endl;
    }
};
class Father {
    string fatherName;
  public:
    Father(string name) {
        fatherName = name;
    }
    void displayFatherName() {
        cout << "Father's name is: " << fatherName << endl;
    }
};
class Child : public Mother, public Father
 {
    string childName;
  public:
    Child(string motherName, string fatherName, string name) : Mother(motherName), Father(fatherName)
    {
        childName = name;
    }
    void displayName() {
        cout << "Child's name is: " << childName << endl;
    }
};

int main() {
    Child child1("Mr Madhusudan Singh", "Mrs Sushama singh", "Harsh singh");
    child1.displayMotherName();
    child1.displayFatherName();
    child1.displayName();
 return 0;
}
