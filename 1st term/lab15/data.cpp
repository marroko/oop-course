#include "Data.h"

bool IntData::equal(const Data *data) const
{
    bool ifEqual = false;

    if(const IntData *intData = dynamic_cast<const IntData *>(data))
    {
        if(intData->value == this->value)
            ifEqual = true;
    }

    return ifEqual;
}

IntData * IntData::copy() const
{
    IntData *newCopy = new IntData(this->value);
    return newCopy;
}

bool FloatData::equal(const Data *data) const
{
    bool ifEqual = false;

    if(const FloatData *floatData = dynamic_cast<const FloatData *>(data))
    {
        if(static_cast<int>(floatData->value) == static_cast<int>(this->value))
            ifEqual = true;
    }

    return ifEqual;
}

FloatData * FloatData::copy() const
{
    FloatData *newCopy = new FloatData(this->value);
    return newCopy;
}

bool StringData::equal(const Data *data) const
{
    bool ifEqual = false;

    if(const StringData * stringData = dynamic_cast<const StringData *>(data))
    {
        if(stringData->value == this->value)
            ifEqual = true;
    }

    return ifEqual;
}

StringData * StringData::copy() const
{
    StringData * newCopy = new StringData(this->value);
    return newCopy;
}

