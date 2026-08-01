#include "input.hpp"

#include <switch.h>


void Input::update()
{

u64 keys =
hidKeysDown(
CONTROLLER_P1_AUTO
);



if(keys & KEY_PLUS)
{
printf(
"Open Menu\n"
);
}


}
