/*
新生晚会

Time Limit: 2000/1000 MS (Java/Others)    
Memory Limit: 32768/32768 K (Java/Others)
Total Submission(s): 17904    
Accepted Submission(s): 6050


Problem Description
开学了，杭电又迎来了好多新生。ACMer想为新生准备一个节目。来报名要表演节目的人很多，多达N个，
但是只需要从这N个人中选M个就够了，一共有多少种选择方法？
 

Input
数据的第一行包括一个正整数T，接下来有T组数据，每组数据占一行。
每组数据包含两个整数N（来报名的人数,1<=N<=30），M（节目需要的人数0<=M<=30）
 

Output
每组数据输出一个整数，每个输出占一行
 

Sample Input
5
3 2
5 3
4 4
3 6
8 0
 

Sample Output
3
10
1
0
1
*/

/*
里面有一些大数处理，要用浮点数才能搞定
*/

#include <stdio.h>

double cnm(int n, int m){
    double ret = 1;
    int i, j;

    if(n < m)
        return 0;
    else if(m == 0)
        return 1;
    else if(m == 1)
        return n;

    for(int i = 0; i <= m -1; i++){
        ret *= (n-i);
    }

    for(int i = 1; i <= m; i++){
        ret /= i;
    }

    return ret;
}

int main(int argc, char const *argv[])
{
    int t, N, M;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &N, &M);
        printf("%.0lf\n", cnm(N, M));
    }

    return 0;
}