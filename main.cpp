#include <iostream>

void move(int& count,int n, int src, int work, int dest)
{
    count++;
    if(n>1)
        move(count,n-1,src,dest,work);
    std::cout <<"Step:"<<count << " | Move disk " << n << " from " << src << " to " << dest<< std::endl;
    if(n>1)
        move(count,n-1,work,src,dest);
}

int main() {

    int n = 10;
    int dest = 3;
    int counter =0;

    move(counter,n,1,dest-1,dest);

    std::cout << "Took " << counter << " steps" << std::endl;
    return 0;
}
