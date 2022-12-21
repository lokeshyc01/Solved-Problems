import java.util.*;

class ArrayX
{
   public int CountDigit(int iNo)
   {
    int iCnt = 0;

        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
   }
}
class Program48
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        ArrayX aobj =  new ArrayX();

        System.out.println("Enter a Number");
        int iDigit = sobj.nextInt();

         int iRet = aobj.CountDigit(iDigit);

         System.out.println("The digits in the number are :-> "+iRet);

    }
}
