//��a��b�����Լ������С������

int gcd( int a, int b ){
	if( b == 0 ) return a;
	else return gcd( b, a%b );
}
int lcm( int a, int b ){
	return a * b / gcd( a, b);
}

//������
int Fast(int x,int n){
    int tem = x,ans = 1;
    while(n){
        if(n%2==1) ans*=tem;
        tem *= tem;
        n >>= 1;
    }
    return ans;
}