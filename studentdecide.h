#ifndef STUDENTDECIDE_H_
#define STUDENTDECIDE_H_
#include "linsearch.hpp"
#include "student.h"
#include "studentenor.h"

class StudentDecide : public LinSearch<Student>
{
private:
	bool l;
public:
    bool  Cond(const Student &e) const { return e.average<4;}
   };

#endif // STUDENTDECIDE_H_
