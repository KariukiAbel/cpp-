#include <iostream>
#include <sstream>
using namespace std;
class student{
private:
  int mage;
  string first_name;
  string last_name;
  int standard;
public:
int  get_age();
  void set_age(int age);
string get_first_name( );
void set_first_name(string fname);
string get_last_name();
 void set_last_name(string lname);
int get_standard();
 void set_standard(int std);
 string to_string();
 student();
};
void student::set_age(int age) {
  mage=age;
}
int student::get_age(){
  return mage;
}
void student::set_first_name(string fname) {
  first_name=fname;
}
string student::get_first_name(){
  return first_name;
}
void student::set_last_name(string lname) {
  last_name=lname;
}
string student::get_last_name(){
  return last_name;
}
void student::set_standard(int std) {
  standard=std;
  /* code */
}
int student::get_standard(){
  return standard;
}
string student::to_string() {
  stringstream ss;
  ss << mage<<"," <<last_name <<","<<first_name<<"," <<standard;
  return ss.str();
}
student::student(){}
int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string()<<"\n";

    return 0;
}
