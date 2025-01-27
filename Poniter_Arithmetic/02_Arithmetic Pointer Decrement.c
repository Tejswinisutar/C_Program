#include<stdio.h>
#include<conio.h>

int main()
{
            int Num[5] = {15,59,88,27,65};
            int  *Ptr = &Num[3];

            printf("\n Base Address of Array is = %d", Num);                        /// 6356696
            printf("\n Value in Pointer is = %d", Ptr);                             /// 6356708
            printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);  /// 27

            getch();

            Ptr--;

            ///  Ptr--  =>  Ptr - (sizeof(<DataTypeOf Ptr>) * 1);
            ///              =>   6356708 - (sizeof(int) * 1)
            ///              =>   6356708 - ( 4 * 1)
            ///              =>   6356708 - 4
            ///               =>  2686704


            printf("\n\n New Value in Pointer is = %d", Ptr);     /// 6356704
            printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);   /// 88

            getch();
            return 0;
}
