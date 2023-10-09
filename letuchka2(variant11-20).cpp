#include <iostream>
int yap(int num){
    if (num == 0){
        return 1;
    }
    int result = 0;
    while (num != 0){
        result += 1;
        num /= 10;
    }
    return result;
}
char* qwe(int num){
    int ost;
    bool neg;
    if (num < 0){
        ost = 2;
        neg = true;
        num = -num;
    } else {
        ost = 1;
        neg = false;
    }
    int total_lenght = 3;
    if (neg){
        total_lenght += 1;
    }
    total_lenght += yap(num);
    char* result = new char[total_lenght];
    for (int index = total_lenght - 2; index > ost; --index){
        int asd = num % 10; char symbol = asd + '0';
        result[index] = symbol;
    }
    if (neg){
        result[0] = '-';
        result[1] = '0';
        result[2] = 'd';
    } else {
        result[0] = '0';
        result[1] = 'd';
    }
    result[total_lenght - 1] = '\0';

    return result;
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<qwe(n)<<std::endl;
}