import java.util.Scanner;
class cpe4
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        long arr[][]=new long [1000][2];
        long input = 1;
        int i = 0;
        while(input!=0)
        {
            input =sc.nextLong();
            if(input%11==0)
            {
                arr[i][0]=input;
                arr[i][1]=1;
            }
            else
            {
                arr[i][0]=input;
                arr[i][1]=0;
            }
            i++;
        }
        for(int n=0;n<i;n++)
        {
            if(arr[n][1]==1 && arr[n][0]!=0)
                System.out.println(arr[n][0]+" is a multiple of 11.");
            else if(arr[n][1]!=1 && arr[n][0]!=0)
                System.out.println(arr[n][0]+" is not a multiple of 11.");
        }     
    }
}