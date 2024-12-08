#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t input;
    printf("Enter age: ");
    scanf("%lu", &input);
    printf("Years:      %lu\n", input);

    input *= 365;
    printf("Days:       %lu\n", input);

    input *= 24;
    printf("Hours:      %lu\n", input);

    input *= 60;
    printf("Minutes:    %lu\n", input);

    input *= 60;
    printf("Sedonds:    %lu\n", input);

    return 0;
}
