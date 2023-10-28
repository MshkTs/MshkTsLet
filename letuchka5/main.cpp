#include <iostream>
int main() {
    char sym[] = "1234567890AaBbCcDdEeFfGgHh";
    for (char s1 : sym){
        for (char s2 : sym){
            for (char s3 : sym){
                for (char s4 : sym){
                    for (char s5 : sym){
                        printf("%c%c%c%c%c\n", s1, s2, s3, s4, s5);
                    }
                }

            }
        }
    }

}

