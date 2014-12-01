#include "StudentSummation.h"

void StudentSummation::Add(const Student &x)
{
    result->neptun = student.neptun;
    result->summark += x.summark;
    result->pcs += 1;
    result->average = (double)result->summark/result->pcs; // (double) ?
}