/*************************************************************************
	> File Name: atoi.c
	> Author: 
	> Mail: 
	> Created Time: 2014年09月22日 星期一 04时06分22秒
 ************************************************************************/

/*
 *把一个数字字符串转换为一个整数
 */

int
ascii_to_integer( char *string )
{
    int value;
    value = 0;
    
    /*
    * 逐个把字符串的字符转换为数字
    * */
    while( *string >= '0' && *string <= '9' )
    {
        value *= 10;
        value += *string - '0';
        string++;
    }

    /*
    * 错误检查:如果由于遇到一个非数字字符而终止,把结果设置为0
    * */
    if( *string != '\0')
        value = 0;
    
    return value;
}
