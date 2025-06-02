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

int penuh(Stack *S){
    return (S->Count == MAXSTACK);
    }

int kosong(Stack *S){
    return (S->Count == 0);
}

void pop(Stack *S, ItemType *x) {
    if (kosong(S)) {
        cout << "Stack kosong!" << endl;
    } else {
        --(S->Count);
           cout << "Ambil dong:" << S->Item[S->Count] << endl;
              *x = S->Item[S->Count];
    }
}

void push(ItemType x, Stack *S){
    if (penuh(S)) {
        cout << "Stack penuh!" << endl;
    } else {
        S->Item[S->Count] = x;
            cout << "Tambah dong:" << S->Item[S->Count] << endl;
     ++(S->Count);
    }
}
int main(){
    Stack akhs;
    awal(&akhs);

    ItemType *hehe = akhs.Item;
    pop(&akhs, hehe);
    push(99, &akhs);
    push(73, &akhs);
    push(23, &akhs);
    push(88, &akhs);
    pop(&akhs, hehe);
    push(12, &akhs);
    push(65, &akhs);
    push(53, &akhs);
    push(45, &akhs);
    push(34, &akhs);
    push(78, &akhs);
    push(90, &akhs);
    pop(&akhs, hehe);
    push(100, &akhs);
    push(101, &akhs);
    push(102, &akhs);
    return 0;
}