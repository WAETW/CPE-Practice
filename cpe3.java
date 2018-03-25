import java.util.Scanner;
public class cpe3
{
    public cpe3()
    {
        
    }
    public static int algo(int n)
    {
        int i=1;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else
            {
                n=3*n+1;
            }
            i++;
        }
        return i;
    }
}