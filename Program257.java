import java.util.*;

class Numbers
{
    public boolean CheckArmstrong(int iNo)
    {
        int iDigitCount = 0;
         int iTemp = iNo;
        int iDigit = 0,iPower = 1,iSum = 0;

         while(iTemp != 0)
         {
            iDigitCount++;
            iTemp = iTemp/10;
         }

         iTemp = iNo;

         while(iTemp != 0)
         {
            iDigit = iTemp % 10;
            for(int iCnt = 1; iCnt <= iDigitCount; iCnt++)
            {
                iPower = iPower * iDigit;
            }
            iSum = iSum + iPower;
            iPower = 1;

            iTemp = iTemp / 10;
         }

         if(iSum == iNo)
         {
            return true;
         }
         else
         {
            return false;
         }
    }
}
class Program257
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        boolean bRet = nobj.CheckArmstrong(iNo);
        if(bRet == true)
        {
            System.out.println(iNo+" is Armstrong Numbers");
        }
        else
        {
            System.out.println(iNo+" is Armstrong Numbers");
        }
    }
}