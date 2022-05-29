#include "BinaryTree.h"
#include <cstring>

using namespace std;


binaryTree::binaryTree(Word * wordList, long long int wordSize)
{
    long long int i;
    node * nodeList;
    nodeList = new node[]

    for(i=0; i<wordSize; ++i)
    {

    }
}

void binaryTree::insert(char * s)
{
    node * a;
    a = new node(a);
    if(this->root == nullptr)
    {
        root = a;
        return;
    }
    else if (strcmp(s, root->getValue().name)<0)
    {
        if(root->getLeft()==nullptr)
        {
            root->setLeft(a);
            a->setParent(root);
            return;
        }
        insert(a, root->getLeft());
        return;
    }
    else if(strcmp(s, root->getValue().name)>0)
    {
        if(root->getRight()==nullptr)
        {
            root->setRight(a);
            a->setParent(root);
            return;
        }
        insert(a, root->getRight());
        return;
    }
    else
    {
        Word temp;
        temp = root->getValue();
        temp.times++;
        root->setValue(temp);
        return;
    }
}

void binaryTree::insert(node * a, node * start)
{
    if(strcmp(a->getValue().name, start->getValue().name)==0)
    {
        Word temp;
        temp = start->getValue();
        temp.times++;
        start->setValue(temp);
        return;
    }
    else if(strcmp(a->getValue().name, start->getValue().name)<0)
    {
        if(start->getLeft()==nullptr)
        {
            start->setLeft(a);
            a->setParent(start);
            return;
        }
        insert(a, start->getLeft());
        return;
    }
    else if(strcmp(a->getValue().name, start->getValue().name)>0)
    {
        if(start->getRight()==nullptr)
        {
            start->setRight(a);
            a->setParent(start);
            return;
        }
        insert(a, start->getRight());
        return;
    }
    cout<<"problem"<<endl;
}



