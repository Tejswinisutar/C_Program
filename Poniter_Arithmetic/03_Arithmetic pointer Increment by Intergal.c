#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5] = {15,59,88,27,65};
    int  *Ptr = Num;

    printf("\n Base Address of Array is = %d", Num);     /// 6356696
    printf("\n Value in Pointer is = %d", Ptr);         ///  6356696
    printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);  ///  15

    getch();

    Ptr = Ptr + 3;

    ///  Ptr = Ptr + 3  =>  Ptr + (sizeof(<DataTypeOf Ptr>) * 3);
    ///                          =>   6356696 + (sizeof(int) * 3)
    ///                          =>   6356696 + ( 4 * 3)
    ///                          =>   6356696 + 12
    ///                          =>   6356708


    printf("\n\n New Value in Pointer is = %d", Ptr);     /// 6356708
    printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);   /// 27

    getch();
    return 0;
}