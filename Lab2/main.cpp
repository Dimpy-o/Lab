/*#pragma once
class Dyhotomia_class{
    public:
        Dyhotomia_class(void);
        ~Dyhotomia_class(void);
};*/
#include "Dyhotomia_class.h"

Dyhotomia_class * dyh = new Dyhotomia_class();
int err = dyh->count(x);
delete dyh;