# include <stdio.h>
# include <stdlib.h>
# include "euler.h"
unsigned long gcd(unsigned long a,unsigned long b){
	if (a%b){
		gcd(b,a%b);
	}
	else{
		return b;
	}
}
unsigned long lcm(unsigned long a,unsigned long b){
	return a*b/gcd(a,b);
}
unsigned long problem_1(unsigned long max_n){
	long i;
	long ans=0;
	for(i=0;i<max_n;i++){
		if (i%3==0||i%5==0){
			ans+=i;
		}
	}
	return ans;
}
unsigned long problem_5(){
	unsigned long i=1;
	unsigned long ans=1;
	while(i++<20){
		ans=lcm(i,ans);
	}
	return ans;
}
unsigned long problem_6(unsigned int max_n){
	unsigned long ans=0;
	unsigned long sum_of_squares=0;
	unsigned long square_of_a_sum=0;
	int i;
	for(i=1;i<=max_n;i++){
		sum_of_squares+=i*i;
	}
	for(i=1;i<=max_n;i++){
		square_of_a_sum+=i;
	}
	square_of_a_sum*=square_of_a_sum;
	return square_of_a_sum-sum_of_squares;
}