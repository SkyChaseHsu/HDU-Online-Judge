/*
Problem Description:
Contest time again! How excited it is to see balloons floating around. But to tell you a secret, 
the judges' favorite time is guessing the most popular problem. When the contest is over, 
they will count the balloons of each color and find the result.

This year, they decide to leave this lovely job to you. 
 

Input:
Input contains multiple test cases. Each test case starts with a number N (0 < N <= 1000) 
-- the total number of balloons distributed. The next N lines contain one color each. 
The color of a balloon is a string of up to 15 lower-case letters.

A test case with N = 0 terminates the input and this test case is not to be processed.
 

Output:
For each case, print the color of balloon for the most popular problem on a single line. 
It is guaranteed that there is a unique solution for each test case.
 

Sample Input:
5
green
red
blue
red
red
3
pink
orange
pink
0
 

Sample Output:
red
pink
*/

#include <stdio.h>
#include <string.h>

typedef struct _Ball
{
	char color[20];
}Ball;

int main(int argc, char const *argv[])
{
	Ball ball[1000];
	int N, max, cnt, flag;

	while(scanf("%d", &N) && N){
		getchar();
		max = 0;
		for(int i = 0; i < N; i++)
			scanf("%s", ball[i].color);

		for(int i = 0; i < N; i++){
			cnt = 0;
			for(int j = 0; j < N; j++){
				if(strcmp(ball[i].color, ball[j].color) == 0)
					cnt++;
				if(cnt > max){
					max = cnt;
					flag = i;
				}
			}
		}

		printf("%s\n", ball[flag].color);
	}
	return 0;
}