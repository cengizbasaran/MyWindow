
class Application
{
public:
    Message *getMessage();
    void dispatchMessage(Message *pMessage);

    int run();

    static Application getInstance();

private:
    friend int main(int argc, char const *argv[]);

    static Application instance;
    int argc;
    char const *argv[];
};
