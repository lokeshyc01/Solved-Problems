import java.util.*;

class ArrayX
{
    int iSize;
    public ArrayX(int iNo)
    {
        iSize = iNo;
    }

   public void DisplayFactor()
   {
       int iCnt = 0,iMult = 1;

       for(iCnt = 1;iCnt <= iSize;iCnt++)
       {
          if(iSize % iCnt == 0)
          {
            System.out.println(iCnt);
          }
       }
      
   }
}

class Program31
{
   public static void main (String arr[])
   {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number");
       int iSize = sobj.nextInt();

       ArrayX aobj = new ArrayX(iSize);

        aobj.DisplayFactor();
   }
}
