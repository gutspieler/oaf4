#ifndef STUDENTSUMMATION_H_
#define STUDENTSUMMATION_H_
#include "student.h"
#include "summation.hpp"


//Tevékenység: Meghatározza az adott neptunkódhoz tartozó átlagot.
//Bemenet:Student
//Kimenet:Student

class StudentSummation : public Summation<Student,Student> 
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