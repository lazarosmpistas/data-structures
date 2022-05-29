#ifndef binary_tree

#include "Words.h"
#include "Node.h"

class binaryTree
{
    private:
        node * root;
    public:
        binaryTree(Word *, long long int);
        void insert(char *);
        bool remove(char *);
        long long int search(char *);
        void insert(node *, node *);
};





#endif // binary_tree
