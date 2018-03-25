import java.util.Scanner;
public class cpe3main
{
    public static void main(String[] args)
    {
        Scanner sc =new Scanner(System.in);
        while(sc.hasNext())
        {
            int result=0;
            int i =sc.nextInt();
            int j =sc.nextInt();
            int arr[] =new int[j+1]; 
            if(i>j)
            {
                int temp=0;
                j=temp;
                j=i;
                i=temp;
            }
            if(0<i && j<1000000)
            {
                for(int n=i;n<=j;n++)
                {
                    int temp;
                    temp=cpe3.algo(n);
                    arr[n]=temp;
                }
                for(int n=i;n<=j;n++)
                {
                    result=Math.max(result,arr[n]);
                }
                System.out.println(i+" "+j+" "+result);
            }
        }
    }
}