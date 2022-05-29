#include "Words.h"
#include "Sorted.h"
#include <iostream>
#include <cstring>

using namespace std;


void Sorted::quicksort(Word * words, long long int left, long long int right)
{
    if(left>=right)
        return;
    long long int mid = this->partition(words, left, right, (left+right)/2);
    //cout<<1<<endl;
    this->quicksort(words, left, mid-1);
    this->quicksort(words, mid+1, right);
}

long long int Sorted::partition(Word * words, long long int left, long long int right, long long int pivot)
{
    Word temp;
    long long int lc=left, rc=right;
    temp = words[lc];
    words[lc] = words[pivot];
    words[pivot] = temp;
    lc=left+1;
    while(true)
    {
        for(; strcmp(words[lc].name, words[left].name)<=0 && rc>=lc; lc++){}
        for(; strcmp(words[rc].name, words[left].name)>0 && rc>=lc; rc--){}
        if(rc<lc)
        {
            temp = words[rc];
            words[rc] = words[left];
            words[left] = temp;
            return rc;
        }
        temp = words[lc];
        words[lc] = words[rc];
        words[rc] = temp;
    }
    /*
    temp = words[rc];
    words[rc] = words[left];
    words[left] = temp;
    return rc;
    */
    //cout<<1<<endl;
}

Sorted::Sorted(Word * x, long long int a, long long int b):notSorted(x, a, b)
{
    //cout<<1<<endl;
    quicksort(words, 0, size-1);
    /*
    for(int i=0; i<size; i++)
        cout<<this->words[i].name<<endl;
    */
}

long long int Sorted::search(char * s, long long int first, long long int last)//last pos is CHECKED
{
    //cout<<1<<endl;
    long long int mid = (first+last)/2;
    if(last-first<=1)
    {
        if(strcmp(this->words[first].name, s)==0)
            return first;
        else if(strcmp(this->words[last].name, s)==0)
            return last;
        else
            return -1;
    }
    if(strcmp(this->words[mid].name, s)==0)
    {
        //cout<<2<<endl;
        return mid;
    }
    else if(strcmp(this->words[mid].name,s)>0)
    {
        //cout<<3<<endl;
        return search(s, first, mid);
    }
    else
    {
        //cout<<4<<endl;
        return search(s, mid, last);
    }
}

bool Sorted::remove(char * s)
{
    long long int pos = this->search(s, 0, this->size-1);
    if(pos==-1)
        return false;
    else
        for(long long int i=pos; i<size-1; i++)
        {
            this->words[i].name = this->words[i+1].name;
        }
        //delete[] this->words[i];
        this->size--;
        if(this->maxSize-this->size>=50)
            this->words->decreaseSize(this->words, this->maxSize);
        return true;
}

long long int Sorted::insert(char * s)
{
    long long int i, flag = this->search(s, 0, this->size-1);
    if(flag!=-1)
        this->words[flag].times++;
    else
    {
        if(this->maxSize == this->size)
            this->words = this->words->increaseSize(this->words, this->maxSize);
        for(i=this->size-1; i>=0 && strcmp(this->words[i].name, s)>0; i--)
            this->words[i+1] = this->words[i];
        this->words[i+1].name = s;
        this->words[i+1].times = 1;
    }
}




