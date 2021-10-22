#include <iostream>
#ifdef __cplusplus
extern "C"{
#endif
#include "SeqQueue.h"
#ifdef __cplusplus
}
#endif


int main() {
    SeqQueue * test = SQInit();
    SQEnqueue(test, (void*)1);
    SQPrint(test,[](void* x){printf_s("%5d",x);});
    SQFree(test);
    return 0;
}
