#include <stdio.h>
#include <time.h>

int count = 0;

void hanoi_tower(int n, char from, char tmp, char to){
    
    if(n==1) count ++;
    //printf("Move disc 1 from %c to %c\n", from, to);

    else{
        hanoi_tower(n-1, from, to, tmp);
        count ++;
        //printf("Move disc %d from %c to %c\n", n, from, to);
        hanoi_tower(n-1, tmp, from, to);
    }
}

int main(){

    clock_t start, end;

    start = clock();
    hanoi_tower(25, 'A', 'B', 'C');
    end = clock();

    float dif = (float)(end - start)/CLOCKS_PER_SEC;

    printf("count = %d, time = %f", count, dif);
     
    return 0;
}
