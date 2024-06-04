#include <stdbool.h>
#include <stdio.h>

bool isPalindrome(int x) {
    int reverseDigits[15];
    int arrayIndex = 0;
    bool isPal = true;

    if(x > 0){
        while(x >= 1){
            reverseDigits[arrayIndex] = x % 10;
            x = x / 10;
            arrayIndex++;
        }
        arrayIndex--;

        int midpoint = (arrayIndex + 1) / 2;
        int start = 0;

        while((start <= midpoint) && (arrayIndex >= midpoint)){
            if(reverseDigits[start] != reverseDigits[arrayIndex]){
                isPal = false;
                break;
            }
            start++;
            arrayIndex--;
        }    
    }
    else{
        isPal = false;
    }

    return isPal;
}

int main(void){

  printf("%d", isPalindrome(10));

  return 0;
}