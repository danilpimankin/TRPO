#ifndef ESTACKEXEPTION_H
#define ESTACKEXEPTION_H

#include <string.h>


class EStackException
{
  public:
    EStackException (const char *msg)
    {
        message = new char[strlen(msg)+1];
        strcpy (message, msg);
    }

    ~EStackException()
    {
        delete message;
    }

    const char *what()
    {
        return message;
    }

private:
    char *message;
};

#endif // ESTACKEXEPTION_H
