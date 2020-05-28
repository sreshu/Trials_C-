    #include <iostream>
    using namespace std;
     
     
    char* RemoveChar(char* input)
    {
        char* dest = input;
        char* src = input;
     
        while(*src)
        {
            if (isdigit(*src)) {*dest++ = *src++; continue; }
     
            src++;
        }
        *dest = '\0';
        return input;
    }
     
    int main(void)
    {
        char inText[] = "1234566789101112ABCDEF";
        printf("The result is %s\n", RemoveChar(inText));
        // Expected Output: " Mickey "
    }
