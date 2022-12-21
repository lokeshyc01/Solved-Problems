import java.util.*;

class ArrayX
{
    int iSize;
    public ArrayX(int iNo)
    {
        iSize = iNo;
    }

   public int Factorial()
   {
       int iCnt = 0,iMult = 1;

       for(iCnt = 1;iCnt <= iSize;iCnt++)
       {
          iMult = iMult * iCnt;
       }
       return iMult;
   }
}

class Program30
{
   public static void main (String arr[])
   {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number");
       int iSize = sobj.nextInt();

       ArrayX aobj = new ArrayX(iSize);

       int iRet = 0;

       iRet = aobj.Factorial();

       System.out.println("Factorial is : "+iRet);
   }
}
