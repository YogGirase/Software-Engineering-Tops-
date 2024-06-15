/*
  1   2   3   4   5   6   7   8   9  10
 36  37  38  39  40  41  42  43  44  11
 35  64  65  66  67  68  69  70  45  12
 34  63  84  85  86  87  88  71  46  13
 33  62  83  96  97  98  89  72  47  14
 32  61  82  95 100  99  90  73  48  15
 31  60  81  94  93  92  91  74  49  16
 30  59  80  79  78  77  76  75  50  17
 29  58  57  56  55  54  53  52  51  18 
 28  27  26  25  24  23  22  21  20  19
*/
#include <stdio.h>

int main() {
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr1[size][size];
    int row = 0, col;
    int num = 1;
    int end = size - 1;

    for (row = 0; row < size / 2; row++, end--) {
        // loop for left to right
        for (col = row; col < end; col++) {
            arr1[row][col] = num++;
        }

        // loop for top to bottom
        for (col = row; col <= end; col++) {
            arr1[col][end] = num++;
        }

        // loop for right to left
        for (col = end - 1; col >= row; col--) {
            arr1[end][col] = num++;
        }

        // loop for bottom to top
        for (col = end - 1; col > row; col--) {
            arr1[col][row] = num++;
        }
    }

    // printing array
    printf("Spiral pattern:\n");
    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            printf("%3d ", arr1[row][col]);
        }
        printf("\n");
    }

    return 0;
}
