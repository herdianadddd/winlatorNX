#include <switch.h>

#include "app.hpp"


int main()
{

romfsInit();


App app;


if(app.init())
{
    app.loop();
}


app.shutdown();


romfsExit();


return 0;

}
