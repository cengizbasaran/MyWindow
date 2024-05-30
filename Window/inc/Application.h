
class Application
{
public:
    Message &getMessage();
    void dispatchMessage(Message &message);


    void setMouseEvent();
    void setKeyboardEvent();

    int run();

    static Application &getInstance();

private:
    Application(void);

    friend int main(int argc, char const *argv[]);

    static Application *myInstance;
    int argc;
    char const **argv;
    MessageQueue messageQueue;
};
