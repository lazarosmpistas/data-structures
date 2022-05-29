#include "Words.h"

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;



Word * Word::increaseSize(Word * words, long long int & maxsize)
{
    Word * words2;
    words2 = new Word[maxsize+50];
    for(int i=0; i<maxsize; ++i)
    {
        words2[i].name = words[i].name;
        words2[i].times = words[i].times;
    }
    maxsize+=50;
    //cout<<"Successful size increase by 50"<<endl;
    return words2;
}

Word * Word::decreaseSize(Word * words, long long int & maxsize)
{
    Word * words2;
    words2 = new Word[maxsize-50];
    for(int i=0; i<maxsize-50; ++i)
    {
        words2[i].name = words[i].name;
        words2[i].times = words[i].times;
    }
    delete[] words;
    maxsize-=50;
    //cout<<"Successful size decrease by 50"<<endl;
    return words2;
}


Word * Word::input(long long int & pos, long long int & maxsize)
{
    pos=-1;
    Word * words;
    words = new Word[50];
    int flag;
    maxsize=50;
    char s[60];
    ifstream ifs;
    //******** FILE *********
    ifs.open("test.txt");
    //***********************
    if(!ifs.is_open())
    {
        cout<<"File could not be opened."<<endl;
        exit(1);
    }
    while (ifs>>s)
    {
        if(pos==maxsize-1)
        {
            words = increaseSize(words, maxsize);
        }
        flag=0;
        for(int i=0; i<=pos; ++i)
        {
            if(strcmp(s,words[i].name)==0)
            {
                words[i].times++;
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            pos++;
            words[pos].name = new char[strlen(s)+1];
            strcpy(words[pos].name,s);
            words[pos].times = 1;
        }
    }
    /*
    for(int i=0; i<=pos; ++i)
        cout<<words[i].name<<" || "<<words[i].times<<endl;
    */
    ifs.close();
    return words;
}

Word & Word::operator=(Word & word)
{
    //delete this->name;
    //cout<<1<<endl;
    //this->name = new char[strlen(word.name)+1];
    this->name = word.name;
    this->times = word.times;
    return *this;
}
/*
Word::~Word()
{
    delete[]
}
*/


