#include<iostream>
#include<string>
#include<math.h>

int function(long int a){
    short int count = 0;
    short int count2 = 0;
    int array[]={0,0,0,0,0,0,0,0,0};
    int b = 0;
    int c = a % 10;
    a = a / 10;
    array[c] = 1;
    while(a > 0){
        b = a % 10;
        if (abs(b - c) != 1)
            return 0;
        c = b;
        a = a / 10;
        ++array[b];
    }
    for(int i = 0; i < 10; i++)
        if(!array[i])
            return 0;
    return 1;
}


int main(){
    long int count = 0;
    for(int i = 0; i < pow(10,40); ++i)
        count = count + function(i);

    system("pause");
    return 0;
}