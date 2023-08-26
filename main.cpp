#include <iostream>
int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        int idx = 0;
        while (argv[argc - 1][idx] != '\0')
            idx++;

        if (argv[argc - 1][idx - 1] == 't')
        {
            // text to img
        }
        else
        {
            // img to text
        }
    }
    else
    {
        std::cout << "please provide a file!";
    }
    return 0;
}