#include <iostream>
#include <sstream>
using namespace std;

class Student{
    
public:
    //Modifiers
    void set_age(int age){
        this->age = age;
    }
    void set_first_name(string fn){
        this->first_name = fn;
    }
    void set_last_name(string ln){
        this->last_name = ln;
    }
    void set_standard(int standard){
        this->standard = standard;
    }
    
    int get_age(){
        return this->age;
    }
    //Accessors
    string get_first_name(){
        return this->first_name;
    }
    
    string get_last_name(){
        return this->last_name;
    }
    
    int get_standard(){
        return this->standard;
    }
    
  //Return string of comma seperated values.
    string to_string(){
        string age;
        string standard;
        standard = std::to_string(this->standard);
        age = std::to_string(this->age);
        string final_ans = age + "," + this->first_name + "," + this->last_name + "," + standard;
        return final_ans;
    }
private:
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
