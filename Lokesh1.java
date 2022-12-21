import java.util.Scanner;
import Lokesh.Lokesh2;

class ArrayX extends Lokesh2
{
    public ArrayX(int iSize)
    {
        super(iSize);
    }

    public int Addition()
    {
        int iSum = 0;

        for(int iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
    
}

class Lokesh1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the size of array");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept();
        int iRet = aobj.Addition();
        System.out.println("The addtion of the array elements is :"+iRet);

        aobj.Display();
    }
}