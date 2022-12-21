import java.util.*;

class ArrayX
{
   public int SumOfDigit(int iNo)
   {
    int iSum = 0,iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;   
            iNo = iNo / 10;
        }
        return iSum;
   }
}
class Program52
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        ArrayX aobj =  new ArrayX();

        System.out.println("Enter a Number");
        int iDigit = sobj.nextInt();

         int iRet = aobj.SumOfDigit(iDigit);

         System.out.println("Addition of The digits in the number are :-> "+iRet);

    }
}
