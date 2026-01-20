#include <iostream>

void myArticleFlags()
{
    unsigned char option_viewed = 0x01;
    unsigned char option_edited = 0x02;
    unsigned char option_favorited = 0x04;
    unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;

    unsigned char myArticleFlags;

    myArticleFlags |= option_viewed;
    if (myArticleFlags & option_deleted) {
        std::cout << "The article was deleted" << std::endl;
    } else
    {
        std::cout << "The article was not deleted" << std::endl;
    }
    myArticleFlags &= ~option_favorited;
}
