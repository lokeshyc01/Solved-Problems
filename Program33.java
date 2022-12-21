import java.util.*;

class ArrayX
{
    int iNo;
    public ArrayX(int iNo)
    {
        this.iNo = iNo;
    }

   public int SummationFactors()
   {
       int iCnt = 0,iSum = 0;

       for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
       {
          if(iNo % iCnt == 0)
          {
            System.out.println(iCnt);
            iSum = iSum + iCnt;
          }
       }
      return iSum;
   }
}

class Program33
{
   public static void main (String arr[])
   {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number");
       int iSize = sobj.nextInt();

       ArrayX aobj = new ArrayX(iSize);

       int iRet = aobj.SummationFactors();

       System.out.println("The summation of factors are : "+iRet);
   }
}
