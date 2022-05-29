#ifndef sorted_h
#define sorted_h

#include "Words.h"
#include "NotSorted.h"


class Sorted: public notSorted
{
    private:
        long long int partition(Word *, long long int, long long int, long long int);
    public:
        Sorted(Word *, long long int, long long int);
        //long long int search(char *);
        //bool delete(char *);
        //long long int insert(char *);
        void quicksort(Word *, long long int, long long int);
        long long int search(char *, long long int, long long int);
        bool remove(char *);
        long long int insert(char *);
};



#endif // sorted_h
