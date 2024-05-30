
#include "MyWindow.h"

Message::Message(Window &window, int MessageId, int Param1, int Param2)
{
    this->window = window;
    this->MessageId = MessageId;
    this->Param1 = Param1;
    this->Param2 = Param2;
}
