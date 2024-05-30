#include "MyWindow.h"


MessageQueueNode::MessageQueueNode(Message &message)
{
    this->message = &message;
    this->next = nullptr;
}

MessageQueue::MessageQueue()
{
    head = nullptr;
}

MessageQueue::~MessageQueue()
{
    freeNode(head);
    head = nullptr;
}

void MessageQueue::freeNode(MessageQueueNode *node)
{
    if (node->next != nullptr)
    {
        freeNode(node->next);
        node->next = nullptr;
    }
    delete node;
}

void MessageQueue::add(Message &message)
{
    if (head == nullptr)
    {
        head = new MessageQueueNode(message);
        return;
    }
    MessageQueueNode *node = head;
    for (;;)
    {
        if (node->next == nullptr)
        {
            node->next = new MessageQueueNode(message);
            break;
        }
        node = node->next;
    }
}

void MessageQueue::addToHead(Message &message)
{
    MessageQueueNode *node = new MessageQueueNode(message);
    node->next = head;
    head = node;
}

Message &MessageQueue::get(void)
{
    MessageQueueNode *node;
    for (;;)
    {
        node = head;
        if (node != nullptr)
        {
            Message &message = *node->message;
            delete node;
            return message;
        }
    }
}

