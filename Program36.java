import java.util.*;

class ArrayX
{
   public void DisplayNonFactors(int iNo)
   {
        for(int iCnt = 1; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt != 0)
            {
                System.out.println(iCnt);
            }
        }
   }
}
class Program36
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        ArrayX aobj =  new ArrayX();

        System.out.println("Enter a Number");
        int iDigit = sobj.nextInt();

        aobj.DisplayNonFactors(iDigit);
       
    }
}
