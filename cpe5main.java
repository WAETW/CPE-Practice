import java.util.Scanner;
class cpe5main
{
    public static void change(long num)
    {
        if(num>=10000000)
        {
            change(num/10000000);
            System.out.print(" kuti");
            num=num%10000000;
        }
        if(num>=100000)
        {
            change(num/100000);
            System.out.print(" lakh");
            num=num%100000;
        }
        if(num>=1000)
        {
            change(num/1000);
            System.out.print(" hajar");
            num=num%1000;
        }
        if(num>=100)
        {
            change(num/100);
            System.out.print(" shata");
            num=num%100;
        }
        if(num>0)
            System.out.print(" "+num);
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        long input[] = new long[1000];
        int count=0;
        while(sc.hasNextLong())
        {
            input[count]=sc.nextLong();
            count++;
        }
        for(int i=0;i<count;i++)
        {
            int temp=i+1;
            System.out.print(temp+".");
            if(input[i]==0)
            {
                System.out.print(" 0");
            }
            else
            {
                change(input[i]);
            }
            System.out.println();
        }
    }
}