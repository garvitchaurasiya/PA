#include "bits/stdc++.h"
using namespace std;

/* OOP: Object-Oriented-Programming:
    -> The main purpose of OOP was to create user define datatypes.
*/

class student{
    public:
    // private:
    // protected:
        string name;
        int roll_no;
        int group;
        int course;

        student(){
            cout<<"Hello new Student\n";
        }
        student(string nm, int rn, int gp, int cs){
            name = nm;
            roll_no = rn;
            group=gp;
            course = gp;
        }
        void printData(){
            cout<<name<<endl;
            cout<<roll_no<<endl;
            cout<<group<<endl;
            cout<<course<<endl;
        }
};

signed main(){

    // student a;
    // strcpy(a.name, "Garvit");
    // a.roll_no = 1146;
    // a.group = 3;
    // a.course = 133;
    
    student a("abcd", 15, 16, 199);
    a.printData();
    

    student b;

    return 0;
}