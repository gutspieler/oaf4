#ifndef STUDENTSUMMATION_H_
#define STUDENTSUMMATION_H_
#include "student.h"
#include "summation.hpp"

class StudentSummation : public Summation<Student,Student> //szummázza az egyes diákok jegyeit
{
public:
    StudentSummation(const Student &x) : Summation<Student,Student>(), student(x) {}
protected:
    Student student;
    void Init() //inicializalas
    {
        result->neptun = student.neptun;
        result->summark = 0;
        result->pcs = student.pcs;
    }
    void First() {}
    bool WhileCond(const Student &x) const { return x.neptun == student.neptun; } //feltetelig dolgozik
    void Add(const Student &x); //ciklusmag
};

#endif // STUDENTSUMMATION_H_  