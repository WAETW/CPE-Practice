import java.util.Scanner;
public class cpe1
{
    public static void main(String[] argv)
    {
        Scanner scanner = new Scanner(System.in);
        int numberofcase = 0, numberofrelative = 0; 
        numberofcase = scanner.nextInt();
        if (numberofcase>0 && numberofcase<500)
        {
            int sum[] = new int[numberofcase];
            for(int i = 0;i < numberofcase; i++)
            {
                int [] arr1;
                numberofrelative = scanner.nextInt();
                arr1 = new int[numberofrelative];
                for(int n = 0; n<numberofrelative;n++)
                {
                    arr1[n] = scanner.nextInt();
                    if (arr1[n]<0 && arr1[n]>30000)
                        System.exit(0);
                }
                for(int n = 0 ; n<numberofrelative;n++)
                {
                    int temp = 0;
                    if(n<numberofrelative-1)
                    {
                        temp = arr1[n]-arr1[n+1];
                    }
                    else
                    {
                        break;
                    }
                    if(temp<0)
                    {
                        temp=-temp;
                    }   
                    else
                    {
                        temp=temp;
                    }
                    sum[i]=sum[i]+temp;
                }
            }
            for(int i =0;i<numberofcase;i++)
            {
                System.out.println(sum[i]);
            }
        }
    }
}