#include "studentenor.h"
#include "StudentSummation.h"
//!ISTREAM

void StudentEnor::First()
{
    seqenor->First();
    Next();
}

void StudentEnor::Next()
{
    end = seqenor->End();
    if (end) return;
    current = seqenor->Current();
    StudentSummation sum(current);
    sum.AddEnumerator(seqenor);
    sum.Run();
    current = sum.Result();
}
