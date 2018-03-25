import java.util.Scanner;
public class cpe2
{
    public static void main(String[] args)
    {
        Scanner sc =new Scanner(System.in);
        while(sc.hasNext())
        {
            long soldiers = sc.nextLong();
            long enemy = sc.nextLong();
            long temp = soldiers - enemy;
            if (temp<0)
                temp=-temp;
            System.out.println(temp);
        }
    }
}