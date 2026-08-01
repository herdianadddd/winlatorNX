#include "app.hpp"

#include "renderer.hpp"
#include "input.hpp"


bool App::init()
{

Renderer::init();


return true;

}



void App::loop()
{

while(appletMainLoop())
{

hidScanInput();


Input::update();


Renderer::draw();


}

}



void App::shutdown()
{

Renderer::exit();

}
