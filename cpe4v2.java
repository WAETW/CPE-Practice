import java.math.BigInteger;
import java.util.Scanner;
class cpe4v2
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        String arr[][]=new String [10000][2];
        String input;
        int i = 0,j=0;
        while(sc.hasNext())
        {
            input =sc.next();
            if(input.equals("0"))
                break;
            BigInteger big_input = new BigInteger(input);
            BigInteger big_11 = new BigInteger("11");
            BigInteger big_zero = new BigInteger("0");
            if(big_input.mod(big_11).equals(big_zero))
            {
                arr[i][0]=input;
                arr[i][1]="1";
            }
            else
            {
                arr[i][0]=input;
                arr[i][1]="0";
            }
            i++;
        }
        for(int n=0;n<i;n++)
        {
            if(arr[n][1].equals("1"))
                System.out.println(arr[n][0]+" is a multiple of 11.");
            else
                System.out.println(arr[n][0]+" is not a multiple of 11.");
        }     
    }
}