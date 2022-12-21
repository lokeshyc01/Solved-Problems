import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int iCnt = 0;

        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <= iCol;j++)
            {
                System.out.print((iCnt % 10+1)%10+"\t");
                iCnt++;
            }
            System.out.println();
        }
    }
}

class Program294
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int i = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int j = sobj.nextInt();

        pobj.Display(i,j);
        
    }
}