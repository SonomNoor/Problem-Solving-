//Calculate factorial of a given number N.


long long int find_fact(int n)
		{
		    // Code here.
		    long fact=1;
		    while (n>0)
{
    fact=fact*n;
    n--;
    
}
return fact;
		}
