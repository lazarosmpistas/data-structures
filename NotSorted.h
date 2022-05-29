#ifndef notsorted_h
#define notsorted_h

#include "Words.h"


class notSorted
{
    protected:
        Word * words;
        long long int size;
        long long int maxSize;
    public:
        notSorted(Word *, long long int, long long int);
        long long int search(char *);
        bool remove(char *);
        long long int insert(char *);
        long long int getSize(){return this->size;}
        long long int getMaxSize(){return this->maxSize;}
};


#endif // notsorted_h
