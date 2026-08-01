#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task7.h"

static Node *CreateNode(const char *word);
static void Show(Node *root);
static void FreeTree(Node *root);

void InitializeTree(Tree *pt)
{
    pt->root = NULL;
}

bool AddWord(Tree *pt, const char *word)
{
    Node *new_node;
    Node *current;
    int cmp;

    if (pt->root == NULL)
    {
        pt->root = CreateNode(word);
        return pt->root != NULL;
    }

    current = pt->root;

    while(1)
    {
        cmp = strcmp(word, current->item.word);

        if (cmp == 0)
        {
            current->item.count++;
            return true;
        }

        if (cmp < 0)
        {
            if (current->left == NULL)
            {
                new_node = CreateNode(word);
                if (new_node == NULL)
                    return false;

                current->left = new_node;
                return true;
            }

            current = current->left;
        }
        else
        {
            if (current->right == NULL)
            {
                new_node = CreateNode(word);
                if (new_node == NULL)
                    return false;

                current->right = new_node;
                return true;
            }

            current = current->right;
        }
    }
}

Node *FindWord(Tree *pt, const char *word)
{
    Node *current = pt->root;
    int cmp;

    while (current != NULL)
    {
        cmp = strcmp(word, current->item.word);

        if (cmp == 0)
            return current;

        if (cmp < 0)
            current = current->left;
        else
            current = current->right;
    }

    return NULL;
}

void ShowTree(const Tree *pt)
{
    Show(pt->root);
}

void DeleteTree(Tree *pt)
{
    FreeTree(pt->root);
    pt->root = NULL;
}

static Node *CreateNode(const char *word)
{
    Node *new_node;

    new_node = malloc(sizeof(Node));

    if (new_node == NULL)
        return NULL;

    strcpy(new_node->item.word, word);
    new_node->item.count = 1;

    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

static void Show(Node *root)
{
    if (root == NULL)
        return;

    Show(root->left);

    printf("%s %d\n",
           root->item.word,
           root->item.count);

    Show(root->right);
}

static void FreeTree(Node *root)
{
    if (root == NULL)
        return;

    FreeTree(root->left);
    FreeTree(root->right);

    free(root);
}