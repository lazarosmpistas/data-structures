#include "Words.h"
#include "Node.h"
#include <cstring>

using namespace std;

node::node(Word & x)
{
    value = x;
    left = nullptr;
    right = nullptr;
    parent = nullptr;
    height = 1;
}

void node::setLeft(node * a)
{
    left = a;
}

void node::setRight(node * a)
{
    right = a;
}

void node::setParent(node * a)
{
    parent = a;
}

void node::setValue(Word & a)
{
    value = a;
}

void node::setHeight()
{
    height = this->getHeight();
}

int node::getHeight()
{
    if(this->getParent()!=nullptr)
        return 1+this->getParent()->getHeight();
    else
        return 1;
}




