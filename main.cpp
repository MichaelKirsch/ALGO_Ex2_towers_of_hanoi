#include <iostream>
#define DEBUG false

void move(int& count,int n, int src, int work, int dest)
{
    count++;
    if(n>1)
        move(count,n-1,src,dest,work);
    if(DEBUG)
        std::cout <<"Step:"<<count << " | Move disk " << n << " from " << src << " to " << dest<< std::endl;
    if(n>1)
        move(count,n-1,work,src,dest);
}

int call_the_towers(int amount)
{
    int n = amount;
    int dest = 3;
    int counter = 0;

    move(counter,n,1,dest-1,dest);

    std::cout << "Took " << counter << " steps for "<< amount << std::endl;
    return counter;
}



int main() {
    call_the_towers(3);
    call_the_towers(4);
    call_the_towers(5);

    return 0;
}
