import java.util.*;

class ArrayX
{
    public int SummationFactors(int iNo)
    {
        int iSum = 0;
        
        for(int iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }

    public boolean ChkPerfect(int iNo)
    {
        int iRet = 0;
        iRet = SummationFactors(iNo);

        return (iRet == iNo);
    }
}
class Program34
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        ArrayX aobj =  new ArrayX();

        System.out.println("Enter a Number");
        int iDigit = sobj.nextInt();

        boolean bRet = aobj.ChkPerfect(iDigit);

        if(bRet == true)
        {
            System.out.println("Number is perfect");
        }
        else
        {
            System.out.println("Number is not perfect");
        }
    }
}
