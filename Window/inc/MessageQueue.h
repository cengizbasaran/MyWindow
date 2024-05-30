
#ifndef __MESSAGE_QUEUE_H__
#ifndef __MESSAGE_QUEUE_H__

#include "Message.h"

class MessageQueueNode
{
public:
    Message *message;
    MessageQueueNode *next;

    MessageQueueNode(Message &message);
};

class MessageQueue
{
public:
    MessageQueue();
    virtual ~MessageQueue();
    void freeNode(MessageQueueNode *node);
    void add(Message &message);
    void addToHead(Message &message);
    Message &get(void);

private:
    MessageQueueNode *head;
};

#endif /*__MESSAGE_QUEUE_H__*/

