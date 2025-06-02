#include <iostream>
#include <string>
using namespace std;
#define MAXSTACK 10

typedef int ItemType;
typedef struct {
    ItemType Item[MAXSTACK];
    int Count;
} Stack;

void awal(Stack *S) {
    S->Count = 0;
}