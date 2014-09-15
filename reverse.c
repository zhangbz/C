/*************************************************************************
	> File Name: reverse.c
	> Author: 
	> Mail: 
	> Created Time: 2014年09月15日 星期一 21时16分41秒
 ************************************************************************/

/*
 * 在一个无符号整数值中翻转位的顺序
 * */
unsigned int 
reverse_bits( unsigned int value )
{
    unsigned int answer;
    unsigned int i;

    answer = 0;

    /*
    *只要i不是0就继续进行.这就使循环与其机器的字长无关 
    */
    for( i = 1; i != 0; i <<= 1 )
    {
        /*
        * 把旧的answer左移1位,为下一位留下空间;如果value的最后一位是1,answer就与1进行OR操作;然后将value右移至下一位
        * */
        answer <<= 1;
        if ( value & 1 )
            answer |= 1;
        value >>= 1;
    }
    
return answer;
}
