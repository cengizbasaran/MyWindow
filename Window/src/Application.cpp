
#include <iostream>

#include "MyWindow.h"

int main(int argc, char const *argv[])
{
    std::cout<<"Hello...\n";

    Application app = Application::getInstance();
    app.argc = argc;
    app.argv = argv;
    return app.run();
}

Application Application::instance = NULL;


Application Application::getInstance()
{
    if (insttance == NULL)
        instance = new Application();

    return instance;
}

int Application::run()
{
    int result;

    Message *msg;
    for (;;)
    {
        msg = getMessage();
        result = DispatchMsg(msg);
        if (result != 0)
            break;
    }

    return result;
}



