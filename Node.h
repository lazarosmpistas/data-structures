#ifndef node_h
#define node_h
#include "Words.h"


class node
{
    private:
       Word value;
       node * left;
       node * right;
       node * parent;
       int height;
    public:
        node(Word &);
        void setLeft(node *);
        void setRight(node *);
        void setParent(node *);
        node * getLeft(){return left;}
        node * getRight(){return right;}
        node * getParent(){return parent;}
        void setValue(Word &);
        void setHeight();
        Word getValue(){return value;}
        int getHeight();
};


#endif // node_h
