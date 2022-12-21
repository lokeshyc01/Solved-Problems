import java.util.*;

class Numbers
{
    // public void EvenFactorDisplay(int iSmall,int iLarge)
    // {
    //     int iCnt = 0;

    //     for(iCnt = 1; iCnt <= (iSmall/2); iCnt+=1)     //iCnt = iCnt+2;
    //     {
    //         if(iSmall % iCnt == 0 && iLarge % iCnt == 0)
    //         {
    //             System.out.println(iCnt);
    //         }
    //     }
    // }
    public void CommonFactorsDisplay(int iNo1,int iNo2)
    {
        int iCnt = 0;

        for(iCnt = 1; (iCnt <= iNo1/2) && (iCnt <= iNo2/2); iCnt++)
        {
            if((iNo1 % iCnt == 0) && (iNo2 % iCnt == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Program254
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();

        System.out.println("Please enter number : ");
        int iNo1 = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.CommonFactorsDisplay(iNo,iNo1);

    }
}