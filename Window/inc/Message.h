
class Message
{
public:
    static const int MSG_CREATE = 1;
    static const int MSG_POST_QUIT = 2;
    Window &window;
    int MessageId;
    int Param1;
    int Param2;

    Message(Window &window, int MessageId, int Param1, int Param2);
};
