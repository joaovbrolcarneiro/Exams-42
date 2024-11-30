#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;              // Declare `i` inside the block
        char *str = argv[1];    // Declare `str` inside the block

        while (str[i])
        {
            if (str[i] == '_')  // Check for underscore
            {
                i++;            // Move to the next character
                str[i] = str[i] - 32; // Convert the letter following the underscore to uppercase
            }
            write(1, &str[i], 1); // Write the current character
            i++;
        }
    }
    return 0; // Return 0 explicitly
}
