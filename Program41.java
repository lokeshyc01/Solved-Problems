import java.util.*;

class ArrayX
{
   public void EvenFactors(int iNo)
   {
        for (int i = 1; i <= (iNo/2); i++)
        {
            if(iNo % i == 0 && i % 2 == 0)
            {
                System.out.println(i);
            }
        }
   }
}
class Program41
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        ArrayX aobj =  new ArrayX();

        System.out.println("Enter a Number");
        int iDigit = sobj.nextInt();

         aobj.EvenFactors(iDigit);

    }
}
