#include "studentsummation.h"


//Tevékenység: Meghatározza az adott neptunkódhoz tartozó átlagot.
//Bemenet:Student
//Kimenet:Student
void StudentSummation::Add(const Student &x)
{
    result->neptun = student.neptun;
    result->summark += x.summark; //jegyek summázása
    result->pcs += 1; //azonos neptun kód hányszor szerepel
    result->average = (double)result->summark/result->pcs; // (double) ?
}