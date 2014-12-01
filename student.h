#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>


struct Student
{
    std::string neptun;
    int summark;
    int pcs;
    double average;

    Student(std::string _neptun="", int _summark=0, int _pcs=0,double _average=0.0)
    {
        neptun = _neptun;
        summark = _summark;
        pcs = _pcs;
        average = _average;
    }

    friend std::istream& operator>>(std::istream& f, Student &x);
};

#endif // STUDENT_H_
