import java.util.*;

class ArrayX
{
   public int SumNonFactors(int iNo)
   {
        int iSum = 0;
        for(int iCnt = 1; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt != 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
   }
}
class Program37
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        ArrayX aobj =  new ArrayX();

        System.out.println("Enter a Number");
        int iDigit = sobj.nextInt();

        int iRet = aobj.SumNonFactors(iDigit);

        System.out.println("Sum of non Factors are : "+iRet);
       
    }
}
