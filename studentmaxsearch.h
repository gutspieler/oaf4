#ifndef STUDENTDECIDE_H_
#define STUDENTDECIDE_H_
#include "linsearch.hpp"
#include "student.h"
#include "studentenor.h"

class StudentDecide : public LinSearch<Student, double, Greater<double> >
{
private:
	bool l;
public:
    double Func(const Student &x) const { return (x.average); }
    bool  Cond(const Student &x) const { return x.average<4;}
   };

#endif // STUDENTDECIDE_H_
