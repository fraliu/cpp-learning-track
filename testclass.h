//
// Created by 10480 on 2024/7/8.
//

#ifndef TESTCLASS_H
#define TESTCLASS_H

struct node {
    node* next;
    int value;
};

class inclass {
public:
    int classno = 2;
    char zz;
};


class testclass {
public:
    int classno = 1;
    testclass();
    explicit testclass(node* ptr);
    node* testptr;
    inclass* ptrclass;
    inclass normalclass;
};

inline testclass::testclass() {
    testptr = new node;
    testptr->next = nullptr;
    testptr->value = 1;
    ptrclass = new inclass;
    ptrclass->zz = 'p';
    normalclass = inclass();
    normalclass.zz = 'n';

}

inline testclass::testclass(node *ptr) {
    testptr = ptr;
    ptrclass = new inclass;
    ptrclass->zz = '1';
    normalclass = inclass();
    normalclass.zz = '2';

}





#endif //TESTCLASS_H
