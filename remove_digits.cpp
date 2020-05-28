        #include <iostream>
        using namespace std;
     
     
        char* RemoveDigits(char* input)
        {
            char* dest = input;
            char* src = input;
     
            while(*src)
            {
                if (isdigit(*src)) { src++; continue; }
                *dest++ = *src++;
            }
            *dest = '\0';
            return input;
        }
     
        int main(void)
        {
            char inText[] = "M456";
            printf("The result is %s\n", RemoveDigits(inText));
            // Expected Output: " Mickey "
        }
