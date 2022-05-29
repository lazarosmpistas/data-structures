#ifndef words_h
#define words_h


struct Word
{
    char* name;
    int times=0;
    Word * input(long long int &, long long int &);
    Word * increaseSize(Word *, long long int &);
    Word * decreaseSize(Word *, long long int &);
    Word & operator=(Word &);
    //~Word();
};



#endif // words_h
