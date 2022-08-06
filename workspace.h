#ifndef WORKSPACE
#define WORKPSPACE
int recursionOf(int num) {
    return num==1 ? 1: num*recursionOf(num-1);
}
#endif

