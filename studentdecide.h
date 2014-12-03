#ifndef STUDENTDECIDE_H_
#define STUDENTDECIDE_H_
#include "linsearch.hpp"
#include "student.h"
#include "studentenor.h"
//Tevékenység:A bemeneti adatstruktúrában megkeresi (eldönti) hogy van-e négyesnél rosszabb átlag.
//Bemenet:Student
//Kimenet:Boolean
class StudentDecide : public LinSearch<Student>
{
public:
    bool  Cond(const Student &e) const { return e.average<4;} //metódus felüldefiniálása
};

#endif // STUDENTDECIDE_H_
