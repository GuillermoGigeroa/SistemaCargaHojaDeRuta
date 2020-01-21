#include "Util.h"
#include <cstdlib>

bool Util::IsNumeric(char esto[20])
{
    int x = 0;
    while(esto[x] != '\0')
    {
        if (!(esto[x] <= '9' && esto[x] >= '0'))
        {
            return false;
        }
        x++;
    }
    return true;
}

int Util::ConvertToInt(char esto[20])
{
    return atoi(esto);
}
