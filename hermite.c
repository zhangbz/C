/*************************************************************************
	> File Name: hermite.c
	> Author: 
	> Mail: 
	> Created Time: 2014年09月22日 星期一 03时50分10秒
 ************************************************************************/

/*
 * 计算Hermite polynomial的值
 *
 * 输入:
 *     n, x: 用于标识值
 *
 * 输出:
 *     polynomial的值(返回值)
 **/

int 
hermite( int n, int x )
{
    /*
    * 处理不需要递归的特殊情况
    * */
    if( x <= 0 )
        return 1;
    if(x == 0)
        return 2 * x;

    /*
    * 否则,递归的计算结果值
    * */
    return 2 * x * hermite( n - 1, x ) - 2 * ( n - 1 ) * hermite( n - 2, x );
}
