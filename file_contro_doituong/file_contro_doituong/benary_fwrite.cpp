#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include<cstdlib>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct threeNum
{
    int n1, n2, n3;
};

int main()
{
    int n, byte_read= 0;
    struct threeNum num, num2;
    FILE* fptr;

    if ((fptr = fopen("C:\\Users\\ABC\\source\\repos\\file_contro_doituong\\program.bin", "wb")) == NULL) {
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    for (n = 1; n < 5; ++n)
    {
        num.n1 = n;
        num.n2 = 5 * n;
        num.n3 = 5 * n + 1;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }
    // sd fread
    for (n = 1; n < 5; ++n) {
        byte_read = fread(&num2, sizeof(threeNum), 1, fptr);
        cout <<"byte_read: " << byte_read << endl;
        cout << "num2: " << num2.n1 << " - " << num2.n2 << " - " << num2.n3 << endl;
        fseek(fptr,sizeof(threeNum), SEEK_SET);

    }

    fclose(fptr);

    return 0;
}