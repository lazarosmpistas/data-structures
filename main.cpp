#include <iostream>
#include "Words.h"
#include <fstream>
#include "NotSorted.h"
#include "Sorted.h"
#include "Node.h"

using namespace std;


int main()
{
    Word * words;
    long long int wordsSize, wordsMaxSize;
    words = words->input(wordsSize, wordsMaxSize);
    wordsSize++;
    Sorted a(words, wordsSize, wordsMaxSize);
    /*
    cout<<"'The' was inserted at pos:"<<a.insert("The")<<endl<<"'aabbcc' was inserted at pos: "<<a.insert("aabbcc")<<endl;
    cout<<"Current size is: "<<a.getSize()<<endl<<"Max size is: "<<a.getMaxSize()<<endl;
    cout<<"Removing The is: "<<a.remove("The")<<endl<<"Removing aaabbbccc is: "<<a.remove("aaabbbccc")<<endl;
    cout<<"Current size is: "<<a.getSize()<<endl<<"Max size is: "<<a.getMaxSize()<<endl;
    */
    /*
    for(int i=0; i<wordsSize; ++i)
        cout<<words[i].name<<endl;
    //cout<<a.search("T11", 0, a.getSize())<<endl;
    //cout<<a.remove("Thee")<<endl;
    node c(words[0]), b(words[1]);
    c.setLeft(&b);
    cout<<c.getLeft()->getValue().name<<endl;
    */

    return 0;
}
