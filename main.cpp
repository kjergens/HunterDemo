#include <iostream>
#include <string>

using namespace std;

void flip(int b) {
    b *= -1;

    return;
}

void flip(int* bPtr) {
    *bPtr *= -1;

    return;
}


int main() {
    int a = 6;

    // * means reference
    int *aPtr = &a;
    string name  = "Hunter";
    string* namePtr = &name;

    string label = "Variable:";
    printf("%-35s%d\n", label.c_str(), a);
    printf("%-35s%s\n", label.c_str(), name.c_str());

    printf("%s", typeid(name).name());

    label = "Address of variable:";
    printf("\n%-35s%p\n", label.c_str(), &a);
    printf("%-35s%p\n", label.c_str(), &name);

    label = "De-reference address of variable:";
    printf("\n%-35s%d\n", label.c_str(), *&a);
    printf("%-35s%s\n", label.c_str(), (*&name).c_str());

    label = "Pointer (reference) to variable";
    printf("\n%-35s%p\n", label.c_str(), aPtr);
    printf("%-35s%p\n", label.c_str(), namePtr);

    label = "De-reference the pointer:";
    printf("\n%-35s%d\n", label.c_str(),  *aPtr);
    printf("%-35s%s\n", label.c_str(), (*namePtr).c_str());

    printf("\nCalling flip()\n");

    flip(a);
    label = "After passing variable (pass by value):";
    printf("%-45s%d\n", label.c_str(), a);

    flip(&a);
    label = "After passing address (pass by reference):";
    printf("%-45s%d\n", label.c_str(), a);

    flip(aPtr);
    label = "After passing pointer (pass by reference):";
    printf("%-45s%d\n", label.c_str(), a);
    return 0;
}

