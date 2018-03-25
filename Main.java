import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner sc =new Scanner(System.in);
        int Answer[][] =new int[10000][4];
        //int count=0;
        while(sc.hasNext())
        {
            int result=0;
            int i =sc.nextInt();
            int j =sc.nextInt();
            int a=i;
            int b=j;
            if(i>j)
            {
                int temp=0;
                temp=j;
                j=i;
                i=temp;
            }
            int arr[] =new int[j+1];
            if(0<i && j<1000000)
            {
                for(int n=i;n<=j;n++)
                {
                    int temp=n;
                    int x=1;
                    while(temp!=1)
                    {
                        if(temp%2==0)
                        {
                            temp=temp/2;
                        }
                        else
                        {
                            temp=3*temp+1;
                        }
                            x++;
                    }
                    //System.out.println(x);
                    arr[n]=x;    
                }
                for(int n=i;n<=j;n++)
                {
                    result=Math.max(result,arr[n]);
                }
                /*Answer[count][1]=i;
                Answer[count][2]=j;
                Answer[count][3]=result;
                count++;*/ 
                System.out.println(a+" "+b+" "+result+" ");
            }
        }
        /*for(int n=0;n<count;n++)
        {
            for(int m=1;m<=3;m++)
            {
                System.out.print(Answer[n][m]+" ");
            }
            System.out.println();
        }*/
    }
}