#include<iostream>
using namespace std;

 class Course{
     private:
     string code,subject;

     public:

     Course(string code="",string subject="");
     void print()const;
 };

 class Student{
     private:
     Course* course;
     string name;
     string id;

     public:
     Student();
     void StudentInfo(string,string);
     void enroll(Course* );
     void withdraw();
     void print()const;

 };


  int main(){

      Course c1("SCSJ1023","PT2");

      Student s1,s2,s3;

      s1.enroll(&c1);
      s2.enroll(&c1);
      s3.enroll(&c1);

      s2.withdraw();

      s1.print();
      s3.print();

      system("pause");
      return 0;
  }


 Course::Course(string _c, string _s){
    code=_c;
    subject=_s;
 }

 Student::Student(){
     course=NULL;
 }

 void Student::enroll(Course* c){
     course=c;
 }

 void Student::withdraw(){
     course=NULL;
 }

 void studentInfo(string _n,string _id){
     
 }

 void Course::print()const{
   cout<<"Name of the course and subject is "<<subject<<" "<<code<<endl;
 }

 void Student::print()const{   
     course->print();
   }