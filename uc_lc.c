/*************************************************************************
	> File Name: uc_lc.c
	> Author: 
	> Mail: 
	> Created Time: 2014年09月15日 星期一 21时01分19秒
 ************************************************************************/
#if 0
/*
* 将标准输入复制到标准输出,将所有大写字母转换为小写字母.注意,它依赖于这个事实:如果参数并非大写字母,tolower函数将不修改它的参数,直接返回它的值
* */
#include<stdio.h>
#include<ctype.h>

int 
main(void)
{
    int ch;

    while( (ch = getchar()) != EOF )
    putchar( tolower(ch) );
}
#endif


/*
* 将标准输入复制到标准输出,把所有的大写字母转换为小写字母
*/
#include<stdio.h>

int
main( void )
{
    int ch;

    while( (ch = getchar()) != EOF )
    {
        if ( ch >= 'A' && ch <= 'Z' )
            ch += 'a' - 'A';
        putchar( ch );
    }
}


