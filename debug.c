#include "debug.h"

/**
 * @brief Display the contents of an array
 * @param[in] stream Pointer to a FILE object that identifies an output stream
 * @param[in] prepend String to prepend to the left of each line
 * @param[in] data Pointer to the data array
 * @param[in] length Number of bytes to display
 **/

void debugDisplayArray(FILE *stream,
                       const char_t *prepend, const void *data, size_t length)
{
    uint_t i;

    for(i = 0; i < length; i++)
    {
        //Beginning of a new line?
        if((i % 16) == 0)
            fprintf(stream, "%s", prepend);
        //Display current data byte
        fprintf(stream, "%02" PRIX8 " ", *((uint8_t *) data + i));
        //End of current line?
        if((i % 16) == 15 || i == (length - 1))
            fprintf(stream, "\r\n");
    }
}