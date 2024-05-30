
#include <iostream>

#include "MyWindow.h"

int main(int argc, char const *argv[])
{
    Application app = Application::getInstance();
    app.argc = argc;
    app.argv = argv;
    return app.run();
}

Application *Application::myInstance = nullptr;


Application &Application::getInstance()
{
    if (myInstance == nullptr)
        myInstance = new Application();

    return *myInstance;
}

int Application::run()
{
    int result;

    for (;;)
    {
        Message &message = getMessage();
        dispatchMessage(message);
        if (message.MessageId == Message::MSG_POST_QUIT)
        {
            delete &message;
            break;
        }
        delete &message;
    }

    return result;
}

Message &Application::getMessage()
{
    return messageQueue.get();
}

void Application::dispatchMessage(Message &message)
{
    switch (message.MessageId)
    {
    case Message::MSG_CREATE:
        message.window.onCreate();
        break;
    case Message::MSG_POST_QUIT:
        message.window.onClose();
        break;
    }
}

void Application::setMouseEvent()
{

}

void Application::setKeyboardEvent()
{

}

