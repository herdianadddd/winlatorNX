#include "container.hpp"

#include <switch.h>


bool Container::create(
const char* name
)
{


char path[256];


sprintf(
path,
"sdmc:/switch/winlator/%s",
name
);



mkdir(
path,
0777
);



return true;

}
