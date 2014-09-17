/*************************************************************************
	> File Name: rev_str.c
	> Author: 
	> Mail: 
	> Created Time: 2014年09月17日 星期三 17时44分45秒
 ************************************************************************/

/*
 * 翻转参数字符串
 * */

void reverse_string( char *str )
{
    char *last_char;

    /*
    * 把last_char设置为指向字符串的最后一个字符
    * */
    for (last_char = str; *last_char != '\0'; last_char++)
        ;
    
    last_char--;

    /*
    * 交换str和last_char指向的字符,然后str前进一步,last_char后退一步,在两个指针相遇或擦肩而过之前重复这个过程
    * */
    while (str < last_char )
    {
        char temp;

        temp = *str;
        *str++ = *last_char;
        *last_char-- = temp;
    }
}
