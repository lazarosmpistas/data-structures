#include "Words.h"
#include "NotSorted.h"
#include <iostream>
#include <cstring>
#include <iostream>

using namespace std;


notSorted::notSorted(Word * x, long long int a, long long int b)
{
    words = x;
    size = a;
    maxSize =b;
}

long long int notSorted::search(char * s)
{
    for(int i=0; i<this->size; ++i)
    {
        if(strcmp(s, this->words[i].name)==0)
            return i;
    }
    return -1;
}

long long int notSorted::insert(char * s)
{
    if(size==maxSize)
        this->words->increaseSize(this->words, this->maxSize);
    for(int i=0; i<this->size; ++i)
        if(strcmp(s, this->words[i].name)==0)
        {
            this->words[i].times++;
            return i;
        }
    this->words[this->size].name = s;
    //cout<<this->maxSize<<" "<<size<<endl;
    this->size++;
    return size;
}

bool notSorted::remove(char * s)
{
    for(int i=0; i<this->size; ++i)
    {
        if(strcmp(this->words[i].name, s)==0)
        {
            for(; i<size-1; i++)
            {
                this->words[i].name = this->words[i+1].name;
            }
            //delete[] this->words[i];
            this->size--;
            if(this->maxSize-this->size>=50)
                this->words->decreaseSize(this->words, this->maxSize);
            return true;
        }
    }
    return false;
}



