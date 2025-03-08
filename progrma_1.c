
/*c program to find  area and perimeter of rectangle*/

#include <stdio.h>

int rec(){
    int l,b;
    scanf("%d %d",&l,&b);
    printf("Area of rectangle is %d\n",l*b);
}
int per(){
    int l,b;
    scanf("%d %d",&l,&b);
    printf("Perimeter of rectangle is %d\n",2*(l+b));
}


int main() {
    rec();
    per();
    return 0;
}