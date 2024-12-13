double myPow(double x, int n){
    if (n == 0) 
        return 1;
    else if((n % 2) == 0)
    {
        double p = myPow(x, n/2);
        return p*p;
    }
    return x * pow(x, n-1);
}


int main()
{
    double pot = myPow(2, 10);
    printf("Potência:  %f \n", pot);
    
    pot = myPow(2.1, 3);
    printf("Potência:  %f \n", pot);
    
    pot = myPow(2, -2);
    printf("Potência:  %f \n", pot);
    
    return 0; 
}